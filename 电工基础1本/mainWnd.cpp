#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#include "单元测试.h" 

#pragma comment(lib, "User32.lib")
using namespace 电工基础1本;

#include "实验1实验内容1.h"



[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
//int main()    
{           
	global::SystemStart(); 
	global::scs->SetFrequency(1000);
	Directory::CreateDirectory(DATATEMP);
	Directory::CreateDirectory("bmp");
	try {     
		Voice ^ v = gcnew Voice; 
		v->Speak("大家好，欢迎使用中腾科教软件");
		int Type;
		Application::Run(gcnew LoginWnd(&Type));
		 
		Application::EnableVisualStyles(); 
		Application::Run(gcnew mainWnd); 
	}      
	catch (System::Exception ^e) { 
		LOG_EXCEPTION(T_to_string(e->ToString()));
	}                  
	      	            
	global::SystemShortDown();
} 
  