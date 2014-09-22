import xml.etree.ElementTree as ET
from collections import namedtuple
import hashlib

class CommandSpec(object):
	Parameter=namedtuple('Parameter',['typ','name','group'])
	
	def __init__(self,commandel):
		def nexttype(el):
			typdecl=el.text if el.text else ''
			nptel=el.find('ptype')
			if(nptel is not None):
				typdecl+=nptel.text+nptel.tail
			return typdecl.strip()
		protoel=commandel.find('proto')
		self.return_type = nexttype(protoel)
		self.return_type_group = protoel.get('group')
		self.name=protoel.find('name').text
		self.params=[]
		for pel in commandel.iter('param'):
			p=CommandSpec.Parameter(nexttype(pel),pel.find('name').text+'1',pel.get('group'))
			self.params.append(p)
			
	def pointer_type(self):
		return "PFN"+self.name.upper()+"PROC_HPP"
	def argtypes(self):
		return ','.join([p.typ for p in self.params])
	def argnames(self):
		return ','.join([p.name for p in self.params])
	def arglist(self):
		return ','.join([ "%s %s" % (p.typ,p.name) for p in self.params])
		
	def print_definition_function(self,featurename,function_included=False):
		ptrfuntemplate="""
typedef %(rettype)s (*%(psignature)s)(%(justtypes)s);
static inline %(rettype)s %(signature)s(%(argstring)s)
{
	static %(psignature)s fn=reinterpret_cast<%(psignature)s>(_impl::_get_proc_address(\"gl%(signature)s\",%(extension)s));
	%(rv)s fn(%(justargs)s);
}"""
		stdfuntemplate="""
static inline %(rettype)s %(signature)s(%(argstring)s)
{
	%(rv)s gl%(signature)s(%(justargs)s);
}"""

		if(self.return_type=='void'):
			rv=''
		else:
			rv='return';
		
		
		funtemplate=ptrfuntemplate
		
		#TODO: use st
		ext=featurename
		if(featurename[-11:-4]=='VERSION'):
			ext=featurename[-3]+','+featurename[-1]
			
		if(function_included):
			funtemplate=stdfuntemplate
		return funtemplate % {"rettype": self.return_type,"signature":self.name[2:],"argstring":self.arglist(),"psignature":self.pointer_type(),"extension":ext,"justargs":self.argnames(),"rv":rv,"justtypes":self.argtypes()}
	def print_static_link_declaration(self,featurename):
		ptrdeclarationtemplate='extern %(rettype)s gl%(signature)s(%(justtypes)s);\n'
		return ptrdeclarationtemplate % {"rettype": self.return_type,"signature":self.name[2:],"justtypes":self.argtypes()}
		
	
		
class RequireRemove(object):
	def __init__(self,parentel=None):
		self.enums=set()
		self.commands=set()
		if(parentel is not None):
			self.profile=parentel.get('profile','core')
			if(self.profile!='compatibility'):
				for eel in parentel.iter('enum'):
					self.enums.add(eel.get('name'))
				for cel in parentel.iter('command'):
					self.commands.add(cel.get('name'))
	def update(self,other):
		self.enums.update(other.enums)
		self.commands.update(other.commands)
				
class FeatureSpec(object):
	def __init__(self,featureel=None):
		if(featureel is None):
			return 
		self.api=featureel.get('api')
		self.name=featureel.get('name')
		self.versionfloat=featureel.get('number')
		self.required=RequireRemove()
		for rel in featureel.iter('require'):
			nr=RequireRemove(rel)
			self.required.update(nr)
		
		self.removed=RequireRemove()
		for rel in featureel.iter('remove'):
			nr=RequireRemove(rel)
			self.removed.update(nr)
			
	def merge(A,B):
		fsum=FeatureSpec()
		fsum.api=B.api
		fsum.name=B.name
		fsum.versionfloat=B.versionfloat
		fsum.required=RequireRemove()
		fsum.removed=RequireRemove()
		
		fsum.required.update(A.required)
		fsum.required.update(B.required)
		fsum.removed.update(A.removed)
		fsum.removed.update(B.removed)
		
		fsum.required.enums.difference_update(fsum.removed.enums)
		fsum.required.commands.difference_update(fsum.removed.commands)
		
		return fsum
	
	def __repr__(self):
		s=''
		s+=self.api+self.versionfloat+'\n'
		s+=self.name+'\n'
		s+=''.join([(r+'\n') for r in sorted(self.required.enums)])
		s+=''.join([(r+'\n') for r in sorted(self.required.commands)])
		return s
			
class ExtensionSpec(object):
	def __init__(self,extel):
		self.name=extel.get('name')
		self.supported=extel.get('supported','gl').split('|')
		self.required=RequireRemove()
		for rel in extel.iter('require'):
			nr=RequireRemove(rel)
			self.required.enums.update(nr.enums)
			self.required.commands.update(nr.commands)
		
		

class SpecificationsXML(object):
	def __init__(self,filename):
		et=ET.parse(filename)
		root=et.getroot()
		
		self.typestring=''
		for t in root.find('types').iter('type'):
			if(t.get('name')!='khrplatform' and t.get('requires') !='khrplatform'):
				self.typestring+=t.text if t.text else ''
				nel=t.find('name')
				if(nel is not None):
					self.typestring+=nel.text+nel.tail
				self.typestring+='\n'
			
		self.param_groups={}
		for g in root.find('groups').iter('group'):
			k=g.get('name')
			v=[e.get('name') for e in g]
			self.param_groups[k]=v
		
		self.enum_values={}
		for eg in root.iter('enums'):
			groupname=eg.get('group',default=eg.get('namespace'))
			grouplist=self.param_groups.setdefault(groupname,[])
			for en in eg.iter('enum'):
				name=en.get('name')
				value=en.get('value')
				self.enum_values[name]=value
				grouplist.append(name)
		
		
		self.commands={}
		for c in root.find('commands').iter('command'):
			cmds=CommandSpec(c)
			self.commands[cmds.name]=cmds
		
		self.features=[]
		for f in root.iter('feature'):
			fs=FeatureSpec(f)
			self.features.append(fs)
		
		self.extensions={}
		for e in root.find('extensions').iter('extension'):
			ext=ExtensionSpec(e)
			self.extensions[ext.name]=ext

		self.apis={}
		for f in self.features:
			self.apis.setdefault(f.api,[]).append(f)
					
		self.complete_apis={}
		for aname,afeatures in self.apis.items():
			
			calist=[afeatures[0]]
			for f in afeatures[1:]:
				calist.append(FeatureSpec.merge(calist[-1],f))
			self.complete_apis[aname]=calist
			

			
	def static_function_check(self,name,commandname):
		if(name[:10]=='GL_VERSION'):
			glapis=self.complete_apis['gl']
			return (commandname in glapis[0].required.commands) or (commandname in glapis[1].required.commands)
		elif(name[-11:-4]=='VERSION'):
			return True
		else:
			return False
			
	def print_enums(self,enumlist,fileobj):
		#constdefin="#ifndef %(k)s\n#define %(k)s %(v)s\n#endif //%(k)s\n"
		constdefin="#undef %(k)s\nstatic const GLenum %(k)s=%(v)s;\n"
		
		senums=[(e,self.enum_values[e]) for e in sorted(enumlist,key=lambda x: self.enum_values[x])]
		for k,v in senums:
			fileobj.write(constdefin % {'k':k,'v':v})
			
	def print_static_link_declarations(self,cmdlist,featurename,fileobj):
		fileobj.write('extern "C" {\n')
		for co in sorted(cmdlist):
			if(self.static_function_check(featurename,co)):
				fileobj.write(self.commands[co].print_static_link_declaration(featurename))
		fileobj.write('}\n')
			
	def print_definitions(self,cmdlist,featurename,fileobj):
		self.print_static_link_declarations(cmdlist,featurename,fileobj)
	
		fileobj.write("namespace gl{\n")
		for co in sorted(cmdlist):
			fileobj.write(self.commands[co].print_definition_function(featurename,self.static_function_check(featurename,co)))
		fileobj.write("}\n")

			
	def write_feature(self,cfeature,fileobj):
		fileobj.write("#ifndef GL_HPP_%(LONGNAME)s_HPP\n#define GL_HPP_%(LONGNAME)s_HPP\n" % {'LONGNAME':cfeature.name})
		fileobj.write('#include "common.hpp"\n')
		fileobj.write('\n\n')
				
		apiname='gles' if cfeature.api[:4]=='gles' else cfeature.api
				
		fileobj.write("#ifndef GL_HPP_API_NAME\n#define GL_HPP_API_NAME GL_HPP_%(API)s_API\n#endif\n" % {'API':apiname.upper()})
		fileobj.write("#ifndef GL_HPP_API_VERSION\n#define GL_HPP_API_VERSION %(VERSION)d\n#endif\n" % {'VERSION':int(float(cfeature.versionfloat)*100)})
		
		self.print_enums(cfeature.required.enums,fileobj)
		self.print_definitions(cfeature.required.commands,cfeature.name,fileobj)
		
		fileobj.write("#endif\n")
	
	def write_extensions(self,apiname,fileobj):
		fileobj.write("#ifndef GL_HPP_%(LONGNAME)s_HPP\n#define GL_HPP_%(LONGNAME)s_HPP\n" % {'LONGNAME':apiname+'EXT'})
		fileobj.write('#include "common.hpp"\n')
		fileobj.write('\n\n')
		
		for ename,espec in sorted(self.extensions.items()):
			if(apiname in espec.supported):
				fileobj.write("#ifndef %(EXTNAME)s\n#define %(EXTNAME)s\n" % {'EXTNAME':espec.name})
				self.print_enums(espec.required.enums,fileobj)
				self.print_definitions(espec.required.commands,'"'+ename+'"',fileobj)
				
				fileobj.write("#endif\n\n")
		
		fileobj.write("#endif\n")
	
if __name__=='__main__':
	import sys
	import os,shutil
	spec=SpecificationsXML(os.path.join('khronosgl','gl.xml'))
	ghproot=os.path.join('..','glhpp')
	try:
		os.mkdir(ghproot)
	except:
		pass
		
	apinames=''
	completed=set()
	for k,v in spec.complete_apis.items():
		kb='gles' if k[:4]=='gles' else k
		
		if(kb not in completed):
			code='0x'+hashlib.sha256(kb.encode('ascii')).hexdigest()[-5:-1]
			apinames+='#ifndef GL_HPP_%(API)s_API\n#define GL_HPP_%(API)s_API %(CODE)s\n#endif\n' % {'API':kb.upper(),'CODE':code}
			completed.add(kb)
			
		for feat in v:
			fname=kb+feat.versionfloat
			fout=open(os.path.join(ghproot,fname+'.hpp'),'w')
			spec.write_feature(feat,fout)
		efname=k+'ext.hpp'
		efout=open(os.path.join(ghproot,efname),'w')
		spec.write_extensions(k,efout)
		
	common=open('common.hpp.in').read() % {'TYPEDEFS':spec.typestring,'API_NAMES':apinames}
	open(os.path.join(ghproot,'common.hpp'),'w').write(common)
			
	#templatefile=open('glproc.hpp.in').read()
	#output=templatefile % {'GL_MAX_VERSION':spec.max_version,'GL_SPECS':spec.print_specs()}
	
	#open('glproc.hpp','w').write(output)
	
