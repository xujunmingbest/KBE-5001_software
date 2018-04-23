#include <iostream>
#include "tool.h"
using namespace std;
CControl g_c("wnd"); 
ConfigXml g_cx;
CControl::CControl(char *Name)
{
	hMutex1 = NULL;
	hMutex1 = CreateSemaphoreA(NULL, 0, 20, Name);
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		cout << "�ź��� " << Name << " �Ѿ�����" << endl;
		MessageBox::Show("�����Ѿ�������");
		exit(-1);
	}
	if (NULL == OpenSemaphoreA(SEMAPHORE_MODIFY_STATE, FALSE, Name))
	{
		printf("���ź�������ʧ�� �� ����ID��%u\n", GetLastError());
		exit(-1);
	}

}

void CControl::Stop()
{
	WaitForSingleObject(hMutex1, INFINITE);
}
void CControl::Start()
{
	long dwSem = 0;
	ReleaseSemaphore(hMutex1, 1, &dwSem);
}
CControl::~CControl()
{
	CloseHandle(hMutex1);
	hMutex1 = NULL;
	cout << "�ź�������" << endl;
}



void trim(string &s);
string T_to_string(const String^in, int len);
wchar_t *multiByteToWideChar(const string& pKey);

//ȷ��ֻ��һ����ť������
void voice_speek(string &in)
{
	trim(in);
	//MessageBox::Show(gcnew String((g_cx.LangDuNvPath + in).c_str()));
	system((g_cx.LangDuNvPath + in).c_str());
	//WinExec((g_cx.LangDuNvPath + in).c_str(), SW_SHOW);
	PROCESS_INFORMATION piProcInfo;
	STARTUPINFO siStartInfo = { sizeof(STARTUPINFO) };

	/*
	if (!CreateProcess(NULL, multiByteToWideChar(g_cx.LangDuNvPath + in), NULL, NULL, FALSE, NULL, NULL, NULL, &siStartInfo, &piProcInfo))
	{
		return;
	}
	WaitForSingleObject(piProcInfo.hProcess, INFINITE);*/
	return;
}

void voice_speek(String^ in)
{
	return voice_speek(T_to_string(in, in->Length * 2));
}

void trim(string &s)
{
	int index = 0;
	if (!s.empty())
	{
		while ((index = s.find(' ', index)) != string::npos)
		{
			s.erase(index, 1);
		}
	}
}

wchar_t *multiByteToWideChar(const string& pKey)
{
	const char* pCStrKey = pKey.c_str();
	//��һ�ε��÷���ת������ַ������ȣ�����ȷ��Ϊwchar_t*���ٶ����ڴ�ռ�
	int pSize = MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, NULL, 0);
	wchar_t *pWCStrKey = new wchar_t[pSize];
	//�ڶ��ε��ý����ֽ��ַ���ת����˫�ֽ��ַ���
	MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, pWCStrKey, pSize);
	return pWCStrKey;
}


string T_to_string(const String^in, int len)
{
	char *buff = new char[len + 1];
	memset(buff, 0x00, len + 1);
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}


