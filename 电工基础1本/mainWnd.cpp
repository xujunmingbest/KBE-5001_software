#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#include "��Ԫ����.h"

#pragma comment(lib, "User32.lib")
using namespace �繤����1��;

#include "ʵ��1ʵ������1.h"

[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Exceptioninit(); //ȫ���쳣��ʼ��


#ifdef unit_testing
	testForLog();
	//testForMessageQueue();
	//testForThreeSegmentTransmissionProtocol();
	testForSerialControl();
#endif






	readXmlConfigFile(configXml);
	LOG_DETAIL(configXml.DesMac, configXml.RepeaterIp, configXml.RepeaterPort);


	try {
		Voice ^ v = gcnew Voice;
		v->Speak("��Һã���ӭʹ�����ڿƽ�����������������:�����");

		readXmlConfigFile(g_cx);
		Application::EnableVisualStyles();
		Application::Run(gcnew mainWnd);
	}
	catch (System::Exception ^e) {
		LOG_EXCEPTION(T_to_string(e->ToString()));
	}
}
