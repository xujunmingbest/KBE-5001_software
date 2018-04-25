#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#pragma comment(lib, "User32.lib")
using namespace 电工基础1本;

#include "实验1实验内容1.h"

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
int main()
{
	Exceptioninit(); //全局异常初始化
	try {
		int *a = NULL;
		*a = 0;
	}
	catch(System::Exception ^e){
		Console::Write(e->ToString());
	}

	try {
		Voice ^ v = gcnew Voice;
		v->Speak("大家好，欢迎使用中腾科教软件，本软件制作者:徐军明");

		readXmlConfigFile(g_cx);
		Application::EnableVisualStyles();
		Application::Run(gcnew mainWnd);
	}
	catch (System::Exception ^e) {
		Console::Write(e->ToString());
	}
	system("pause");
}
