#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#pragma comment(lib, "User32.lib")
using namespace 电工基础1本;


[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
int main()
{
	readXmlConfigFile(g_cx);
	g_cx.LangDuNvPath = "\"" + g_cx.LangDuNvPath + "\"" + " d=";
	Application::EnableVisualStyles();
	Application::Run(gcnew mainWnd);
}
