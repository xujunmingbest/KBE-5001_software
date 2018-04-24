#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#pragma comment(lib, "User32.lib")
using namespace 电工基础1本;


[STAThreadAttribute]
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Voice ^ v = gcnew Voice;
	v->Speak("大家好，欢迎使用中腾科教软件，本软件制作者:徐军明");

	readXmlConfigFile(g_cx);
	Application::EnableVisualStyles();
	Application::Run(gcnew mainWnd);
}
