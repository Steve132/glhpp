
#	This program is free software: you can redistribute it and/or modify
#	it under the terms of the GNU General Public License as published by
#	the Free Software Foundation, either version 3 of the License, or
#	(at your option) any later version.

#	This program is distributed in the hope that it will be useful,
#	but WITHOUT ANY WARRANTY; without even the implied warranty of
#	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#	GNU General Public License for more details.

#	You should have received a copy of the GNU General Public License
#	along with this program.  If not, see <http://www.gnu.org/licenses/>.


import re
import collections

comments=re.compile('\#.*$',re.MULTILINE)

def remove_comments(filetext):
	return comments.sub('',filetext)
	
def get_type_map(filetext):
	nocomments=remove_comments(filetext)
	keys=[]
	values=[]
	keywords={}
	for l in nocomments.splitlines():
		csv=[x.strip() for x in l.split(',')]
		if(len(csv) > 5):
			k=csv[0]
			v=csv[3]
			keywords[k]=v
	keywords['void']='void'
	return keywords

class glFunction(object):
	fun_params=re.compile('\s+(\S*)\s+(.*)$',re.MULTILINE)
	params_types=re.compile('\s*(\S*)\s+(\S*)\s+(\S*)\s+(\S*)')
	Argument=collections.namedtuple('Argument',['name','typ','ino','vtype'])
	argname_prefix='_gl_'
	def __init__(self,lines):
		self.name=lines[0].split('(')[0]
		
		self.db={}
		
		for g in glFunction.fun_params.findall('\n'.join(lines[1:])):
			self.db.setdefault(g[0],[]).append(g[1])
			
		self.return_type=self.db['return'][0]
		self.arguments=[]
		for p in self.db.setdefault('param',[]):
			ap=glFunction.params_types.match(p).groups()
			self.arguments.append(glFunction.Argument(name=ap[0],typ=ap[1],ino=ap[2],vtype=ap[3]))
		self.category=self.db['category'][0].strip()
		
	def pointer_type(self):
		return "PFN"+self.name.upper()+"PROC_HPP"
	
	def print_argument(self,a,tm):
		ptrs=0
		cv=False
		if(a.vtype=='value'):
			if(a.ino=='out'):
				ptrs+=1
		elif(a.vtype=='array'):
			ptrs+=1
			if(a.ino=='in'):
				cv=True
		elif(a.vtype=='reference'):
			ptrs+=1
			if(a.ino=='in'):
				cv=True
		argstr=''
		if(cv):
			argstr+='const '
		argstr+=tm[a.typ]+' '+''.join(['*']*ptrs)
		argstr+=argname_prefix+a.name  #this is because windows is retarded and puts near and far and other names as macros. 
		return argstr
	
	def argument_list(self,tm):
		al=''
		for a in self.arguments:
			al+=self.print_argument(a,tm)+','
		return al[:-1]
	
	def pointer_declaration(self,tm):
		return "typedef %(return_type)s (*%(pfntype)s)(%(alist)s);" % {'return_type':tm[self.return_type],'pfntype':self.pointer_type(),'alist':self.argument_list(tm)}
	
	

	
	def extension_function(self,tm):
		ptrfuntemplate="""
static inline %(rettype)s %(signature)s(%(argstring)s)
{
	static %(psignature)s fn=reinterpret_cast<%(psignature)s>(_impl::_get_proc_address(\"gl%(signature)s\",%(extension)s));
	%(rv)s fn(%(justargs)s);
}"""
		stdfuntemplate="""
inline %(rettype)s %(signature)s(%(argstring)s)
{
	%(rv)s gl%(signature)s(%(justargs)s);
}"""

		if(tm[self.return_type]=='void'):
			rv=''
		else:
			rv='return';
		justargs=''
		for a in self.arguments:
			justargs+=argname_prefix+a.name+','
		justargs=justargs[:-1]
		
		funtemplate=ptrfuntemplate
		
		ext="\"GL_"+self.category+"\""
		if(self.category[:7]=='VERSION'):
			ext=self.category[8]+','+self.category[10]
			if(ext=='1,0' or ext=='1,1'):
				funtemplate=stdfuntemplate
				
		return funtemplate % {"rettype": tm[self.return_type],"signature":self.name,"argstring":self.argument_list(tm),"psignature":self.pointer_type(),"extension":ext,"justargs":justargs,"rv":rv}

class FunctionSpecFile(object):
	inline_declares=re.compile('(\S+):\s*(.*)$',re.MULTILINE)
	
	def __init__(self,filetext):
		self.components=[]
		
		lines=remove_comments(filetext).splitlines()
		i=0
		while(i < len(lines)):
			ideclares=FunctionSpecFile.inline_declares.search(lines[i])
			if(ideclares):
				self.components.append(ideclares.groups())
			elif(lines[i].strip()==''):
				pass
			else:
				j=i
				i+=1
				while(lines[i].lstrip()!=lines[i] and i < len(lines)):
					i+=1
				self.components.append(glFunction(lines[j:i]))
			i+=1
	def iter_functions(self):
		for c in self.components:
			if(isinstance(c,glFunction)):
				yield c
				
class EnumSpecFile(object):
	category=re.compile('(\S+)\s+enum:')
	passthru=re.compile('passthru:.*$')
	
	enumset=re.compile('\s+(\S+)\s+=\s+(0x[0-9A-Fa-f]+|[0-9]+)')
	useset=re.compile('\s*use\s+(\S+)\s+(\S+)')
	
	enumrefer=re.compile('\s+(\S+)\s+=\s+GL_(\S+)')
	
	aliaspatch=re.compile('#\s+alias\s+GL_(\S+)',re.MULTILINE)
	alias=re.compile('\s+alias\s+(\S+)')
	
	def __init__(self,filetext):
		ft=EnumSpecFile.aliaspatch.sub('\n\talias \g<1>',filetext)
		lines=remove_comments(ft).splitlines()
		cur_category=''
		self.categories={}
		use_set=[]
		globa_consts={}
		for l in lines:
			cm=EnumSpecFile.category.search(l)
			pt=EnumSpecFile.passthru.search(l)
			es=EnumSpecFile.enumset.search(l)
			er=EnumSpecFile.enumrefer.search(l)
			us=EnumSpecFile.useset.search(l)
			al=EnumSpecFile.alias.search(l)
			if(cm):
				cur_category=cm.groups()[0]
			elif(es):
				cur_const=es.groups()[1]
				self.categories.setdefault(cur_category,{})[es.groups()[0]]=cur_const
				globa_consts[es.groups()[0]]=cur_const
			elif(al):
				self.categories.setdefault(cur_category,{})[al.groups()[0]]=cur_const
				globa_consts[al.groups()[0]]=cur_const
			elif(er):
				self.categories.setdefault(cur_category,{})[er.groups()[0]]=globa_consts[er.groups()[1]]
				globa_consts[er.groups()[0]]=globa_consts[er.groups()[1]]
			elif(pt):
				pass
			elif(us):
				use_set.append((cur_category,us.groups()[0],us.groups()[1]))
		
		num_passes=10
		for passes in range(num_passes):		
			for u in use_set:
				try:
					if(u[1] in ['VERSION_1_0','VERSION_1_1']):
						self.categories.setdefault(u[0],{})[u[2]]=u[2]
					else:
						self.categories.setdefault(u[0],{})[u[2]]=self.categories[u[1]][u[2]]
						globa_consts[u[2]]=self.categories[u[2]]
				except(KeyError):
					try:
						
						self.categories.setdefault(u[0],{})[u[2]]=globa_consts[u[2]]
					except(KeyError):
						if(passes==(num_passes-1)):
							print "Warning: information not parsed correctly for "+str(u)
							
		self.global_consts=globa_consts
				
class Specifications:
	def __init__(self,name,tmfile,specfile,enumspecfile,enumextspecfile):
		self.name=name
		self.tm=get_type_map(open(tmfile,'r').read())
		self.function_spec=FunctionSpecFile(open(specfile,'r').read())
		self.enum_spec=EnumSpecFile(open(enumspecfile,'r').read())
		self.enumext_spec=EnumSpecFile(open(enumspecfile,'r').read())
		
		self.versions=[(int(x[8])*10+int(x[10])) for x in self.enumext_spec.categories.iterkeys() if(x[:7]=='VERSION')]
		self.max_version=max(self.versions)
		
		
	def print_specs(self):
		fcategories=dict()
		st=''
		for f in self.function_spec.iter_functions():
			fcategories.setdefault(f.category,[]).append(f)
		
		ecategories=self.enumext_spec.categories
		
		ucategories=set(fcategories.iterkeys()).union(ecategories.iterkeys())
		constdefin="#ifndef GL_%(k)s\n#define GL_%(k)s %(v)s\n#endif //GL_%(k)s\n"
		
		vcats=[v for v in ucategories if(v[:7]=='VERSION')]
		ecats=[e for e in ucategories if(e[:7]!='VERSION')]
		cseendefs={}
		cats=sorted(vcats)
		cats.extend(sorted(ecats))
		for c in cats:
			if(c[:7]=='VERSION'):
				vnum=str((int(c[8])*10+int(c[10])))
				st+='#if (GLPROC_VERSION >= '+vnum+')\n'
			st+='\n#ifndef GL_'+c+'\n'
			st+='\n#define GL_'+c+'\n'
			if(c in ecategories):
				for cl,hv in sorted(ecategories[c].iteritems(),key=lambda x: x[1]):
					if(cl not in cseendefs):
						st+=constdefin % {'k':cl,'v':(' '*(60-len(cl))+hv)}
						cseendefs[cl]=hv
					
			st+='\n#endif //GL_'+c+'\n'
		
			if(c in fcategories):
				for f in fcategories[c]:
					st+='\n\n'+f.pointer_declaration(self.tm)+'\n'+f.extension_function(self.tm)
			
				
			if(c[:7]=='VERSION'):
				st+='\n#endif //(GLPROC_VERSION >= '+vnum+')\n'
		return st
	
if __name__=='__main__':
	spec=Specifications('gl','glspecs/gl.tm','glspecs/gl.spec','glspecs/enum.spec','glspecs/enumext.spec')
	
	templatefile=open('glproc.hpp.in').read()
	output=templatefile % {'GL_MAX_VERSION':spec.max_version,'GL_SPECS':spec.print_specs()}
	
	open('glproc.hpp','w').write(output)
	