#include "mainWnd.h"
#include "tool.h"
#include "xml/xml.h"
#include <windows.h>
#pragma comment(lib, "User32.lib")
using namespace �繤����1��;

#include "ʵ��1ʵ������1.h"

[STAThreadAttribute]
//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
int main()
{
	Exceptioninit(); //ȫ���쳣��ʼ��
	try {
		int *a = NULL;
		*a = 0;
	}
	catch(System::Exception ^e){
		Console::Write(e->ToString());
	}

	try {
		Voice ^ v = gcnew Voice;
		v->Speak("��Һã���ӭʹ�����ڿƽ�����������������:�����");

		readXmlConfigFile(g_cx);
		Application::EnableVisualStyles();
		Application::Run(gcnew mainWnd);
	}
	catch (System::Exception ^e) {
		Console::Write(e->ToString());
	}
	system("pause");
}
