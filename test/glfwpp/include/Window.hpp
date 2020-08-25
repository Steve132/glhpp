#ifndef GLFWPP_WINDOW_HPP
#define GLFWPP_WINDOW_HPP

#include "Include.hpp"
#include <memory>
#include <variant>
#include <unordered_map>
#include <string>
#include "Monitor.hpp"

namespace glfw
{
class Window
{
protected:
	std::unique_ptr<GLFWwindow,void (*)(GLFWwindow*)> ptr;
	static void dispatchPosCallback(GLFWwindow* window, int,int);
	static void dispatchSizeCallback(GLFWwindow* window, int,int);
	static void dispatchCloseCallback(GLFWwindow* window);
	static void dispatchRefreshCallback(GLFWwindow* window);
	static void dispatchFocusCallback(GLFWwindow* window, int);
	static void dispatchIconifyCallback(GLFWwindow* window, int);
	static void dispatchMaximizeCallback(GLFWwindow* window, int);
	static void dispatchFramebufferSizeCallback(GLFWwindow* window, int);
	static void dispatchContentScaleCallback(GLFWwindow*,float,float);
	
	static void dispatchMouseButton(GLFWwindow*,int,int,int);
	static void dispatchCursorPos(GLFWwindow*,double,double);
	static void dispatchCursorEnter(GLFWwindow*,int);
	static void dispatchScroll(GLFWwindow*,double,double);
	static void dispatchKey(GLFWwindow*,int,int,int,int);
	static void dispatchChar(GLFWwindow*,unsigned int);
	static void dispatchCharMods(GLFWwindow*,unsigned int,int);
	static void dispatchDrop(GLFWwindow*,int,const char*[]);
	Window(GLFWwindow*);
public:
	using Hint=std::variant<int,std::string>;
	using Hints=std::unordered_map<int,Hint>;
	Window(int width,int height,const Hints& hints=Hints(),const std::string& title=std::string(),const Monitor& mon=Monitor::Primary(),const Window* share=nullptr);
	//TODO: Vulkan with VkInstance
	
	void ShouldClose(bool doclose) {
		glfwSetWindowShouldClose(ptr.get(),doclose ? GLFW_TRUE : GLFW_FALSE);
	}
	bool ShouldClose() const {
		return glfwWindowShouldClose(ptr.get())==GLFW_TRUE;
	}
	void Title(const std::string& title) {
		glfwSetWindowTitle(ptr.get(),title.c_str());
	}
	void Icon(const std::vector<GLFWimage>& images);
	
	Point<int> Pos() const {
		Point<int> p;
		glfwGetWindowPos(ptr.get(),&p.x,&p.y);
		return p;
	}
	void Pos(const Point<int>& p) {
		glfwSetWindowPos(ptr.get(),p.x,p.y);
	}
	Shape<int> Size() const {
		Shape<int> sz;
		glfwGetWindowSize(ptr.get(),&sz.width,&sz.height);
		return sz;
	}
	void Size(const Shape<int>& shp) {
		glfwSetWindowSize(ptr.get(),shp.width,shp.height);
	}
	void SizeLimits(const Shape<int>& mn,const Shape<int>& mx) {
		glfwSetWindowSizeLimits(ptr.get(),mn.width,mn.height,mx.width,mx.height);
	}
	void AspectRatio(int n,int d);
	void AspectRatio(const Shape<int>& shp) { 
		AspectRatio(shp.width,shp.height);
	}
	Shape<int> FramebufferSize() const {
		Shape<int> shp;
		glfwGetFramebufferSize(ptr.get(),&shp.width,&shp.height);
		return shp;
	}
	ROI FrameSize() const {
		ROI fbs;
		glfwGetWindowFrameSize(ptr.get(),&fbs.x,&fbs.y,&fbs.width,&fbs.height);
		fbs.width-=fbs.x;
		fbs.height-=fbs.y;
		return fbs;
	}
#if GLFWPP_GLFW_VERSION_FULL >= 303
	Point<float> ContentScale() const {
		Point<float> pnt;
		glfwGetWindowContentScale(ptr.get(),&pnt.x,&pnt.y);
		return pnt;
	}
	float Opacity() const {
		return glfwGetWindowOpacity(ptr.get());
	}
	void Opacity(float f) const {
		glfwSetWindowOpacity(ptr.get(),f);
	}
#endif

	void Iconify(){
		glfwIconifyWindow(ptr.get());
	}
	void Restore(){
		glfwRestoreWindow(ptr.get());
	}
	void Maximize(){
		glfwMaximizeWindow(ptr.get());
	}
	void Show(){
		glfwShowWindow(ptr.get());
	}
	void Hide(){
		glfwHideWindow(ptr.get());
	}
	void Focus(){
		glfwFocusWindow(ptr.get());
	}

	Monitor GetMonitor() const {
		return glfwGetWindowMonitor(ptr.get());
	}
	void SetMonitor(const Point<int>& corner,
				const Shape<int>& shp,
				const Monitor& newmon=Monitor::Primary(),
				int refreshRate=GLFW_DONT_CARE);
	int Attrib(int attr) const{
		return glfwGetWindowAttrib(ptr.get(),attr);
	}
#if GLFWPP_GLFW_VERSION_FULL >= 303
	void Attrib(int attr,int val) {
		glfwSetWindowAttrib(ptr.get(),attr,val);
	}
	void RequestAttention() {
		glfwRequestWindowAttention(ptr.get());
	}
#endif
	int InputMode(int mode) const{
		return glfwGetInputMode(ptr.get(),mode);
	}
	void InputMode(int mode,int value){
		glfwSetInputMode(ptr.get(),mode,value);
	}
	int Key(int key) const {
		return glfwGetKey(ptr.get(),key);
	}
	int MouseButton(int button) const {
		return glfwGetMouseButton(ptr.get(),button);
	}
	Point<double> CursorPos() const{
		Point<double> p;
		glfwGetCursorPos(ptr.get(),&p.x,&p.y);
		return p;
	}
	void CursorPos(const Point<double>& p) {
		glfwSetCursorPos(ptr.get(),p.x,p.y);
	}
	std::string ClipboardString() const{
		return glfwGetClipboardString(ptr.get());
	}
	void ClipboardString(const std::string& st){
		glfwSetClipboardString(ptr.get(),st.c_str());
	}
	void MakeContextCurrent() const{
		glfwMakeContextCurrent(ptr.get());
	}
	void SwapBuffers() {
		glfwSwapBuffers(ptr.get());
	}
	friend Window CurrentContext();
};
	Window CurrentContext(){
		return Window(glfwGetCurrentContext());
	}
	//void Cursor(const glfw::Cursor& cur); TODO Cursor
}

#endif