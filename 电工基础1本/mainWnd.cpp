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
	Exceptioninit(); //全局异常初始化   
	readXmlConfigFile(configXml);    
	LOG_DETAIL(configXml.DesMac, configXml.RepeaterIp, configXml.RepeaterPort,
		configXml.SerialHandle, configXml.SerialControlSource);
	  
	global::sh->SerialHandleInit();   
	global::scs->SerialHandleInit();    
	global::scs->SetDirectVoltage(10);   
#ifdef unit_testing 
	testForLog();   
	//testForSerialControlSource(); 
	//testForMessageQueue(); 
	//testForThreeSegmentTransmissionProtocol();
	//testForSerialControl();
#endif 

	 
	 
	try {
		Voice ^ v = gcnew Voice;
		v->Speak("大家好，欢迎使用中腾科教软件，本软件制作者:徐军明");
    
		Application::EnableVisualStyles(); 
		Application::Run(gcnew mainWnd); 
	}  
	catch (System::Exception ^e) { 
		LOG_EXCEPTION(T_to_string(e->ToString()));
	}        
	   

	global::sh->SerialHandleClose();
	exit(0);
	  
	 
}
 