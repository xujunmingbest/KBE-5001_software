#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#pragma comment(lib, "User32.lib")
using namespace �繤����1��;


[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Voice ^ v = gcnew Voice;
	v->Speak("��Һã���ӭʹ�����ڿƽ�����������������:�����");

	readXmlConfigFile(g_cx);
	Application::EnableVisualStyles();
	Application::Run(gcnew mainWnd);
}
