#Uniform{1234}{i f d ui}(int location,T value);

vars=['GLfloat','GLdouble','GLint','GLuint']
pref=['f','d','i','ui']
for zi in range(4):
	for c in range(1,5):
		args=','.join([vars[zi]+" v"+str(x) for x in range(c)])
		targs=','.join(["v"+str(x) for x in range(c)])
		print("void Uniform(GLuint l,"+args+") const { glProgramUniform"+str(c)+pref[zi]+"(id,l,"+targs+"); }")
		print("void Uniform"+str(c)+"(GLuint l,GLuint count,const "+vars[zi]+"* v) const { glProgramUniform"+str(c)+pref[zi]+"v(id,l,count,v); }")

for zi in range(2):
	for cr in range(2,5):
		print("void UniformMatrix"+str(cr)+"(GLuint l,GLuint count,GLboolean transpose,const "+vars[zi]+"* v) const { glProgramUniformMatrix"+str(cr)+pref[zi]+"v(id,l,count,transpose,v);}")
		for cc in range(2,5):
			if(cr!=cc):
				print("void UniformMatrix"+str(cr)+"x"+str(cc)+"(GLuint l,GLuint count,GLboolean transpose,const "+vars[zi]+"* v) const { glProgramUniformMatrix"+str(cr)+"x"+str(cc)+pref[zi]+"v(id,l,count,transpose,v);}")
		
print("#ifndef GLHPP_STRICT_API")
for zi in range(2):
	for cr in range(2,5):
		print("void UniformMatrix"+str(cr)+"x"+str(cr)+"(GLuint l,GLuint count,GLboolean transpose,const "+vars[zi]+"* v) const { UniformMatrix"+str(cr)+"(l,count,transpose,v);}")

for zi in range(4):
	for c in range(1,5):
		args=','.join([vars[zi]+" v"+str(x) for x in range(c)])
		targs=','.join(["v"+str(x) for x in range(c)])
		print("void Uniform"+str(c)+"(GLuint l,const "+vars[zi]+"* v) const { Uniform"+str(c)+"(l,1,v); }")

for zi in range(2):
	for cr in range(2,5):
		print("void UniformMatrix"+str(cr)+"(GLuint l,const "+vars[zi]+"* v,GLboolean transpose=GL_FALSE) const { UniformMatrix"+str(cr)+"(l,1,transpose,v);}")
		for cc in range(2,5):
			print("void UniformMatrix"+str(cr)+"x"+str(cc)+"(GLuint l,const "+vars[zi]+"* v,GLboolean transpose=GL_FALSE) const { UniformMatrix"+str(cr)+"x"+str(cc)+"(l,1,transpose,v);}")
		

def template(X):
	print("template<typename... Arguments> void "+X+"(const char* name,Arguments... a) { "+X+"(GetUniformLocation(name),a...); }");

for cr in range(1,5):
	template("Uniform"+str(cr))
	template("UniformMatrix"+str(cr))
	for cc in range(1,5):
		template("UniformMatrix"+str(cr)+"x"+str(cc))

print("#endif")
