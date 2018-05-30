#include <iostream>
#include "tool.h"
using namespace std;
CControl g_c("wnd"); 
CControl::CControl(char *Name)
{
	hMutex1 = NULL;
	hMutex1 = CreateSemaphoreA(NULL, 0, 20, Name);
	if (GetLastError() == ERROR_ALREADY_EXISTS)
	{
		cout << "信号量 " << Name << " 已经创建" << endl;
		MessageBox::Show("程序已经在运行");
		exit(-1);
	}
	if (NULL == OpenSemaphoreA(SEMAPHORE_MODIFY_STATE, FALSE, Name))
	{
		printf("打开信号量对象失败 ， 错误ID：%u\n", GetLastError());
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
	cout << "信号量销毁" << endl;
}



void trim(string &s);
wchar_t *multiByteToWideChar(const string& pKey);

//确保只有一个按钮在运行
void voice_speek(string &in)
{
	trim(in);
	//MessageBox::Show(gcnew String((g_cx.LangDuNvPath + in).c_str()));
	//system((g_cx.LangDuNvPath + in).c_str());
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
	return voice_speek(T_to_string(in));
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
	//第一次调用返回转换后的字符串长度，用于确认为wchar_t*开辟多大的内存空间
	int pSize = MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, NULL, 0);
	wchar_t *pWCStrKey = new wchar_t[pSize];
	//第二次调用将单字节字符串转换成双字节字符串
	MultiByteToWideChar(CP_OEMCP, 0, pCStrKey, strlen(pCStrKey) + 1, pWCStrKey, pSize);
	return pWCStrKey;
}


string T_to_string(String^in)
{
	int len = in->Length*2;
	char *buff = new char[len + 1];
	memset(buff, 0x00, len + 1);
	snprintf(buff, len + 1, "%s", in);
	string temp = buff;
	delete[] buff;
	return temp;
}

int String_to_Int(String^in)
{
	string temp = T_to_string(in);
	return atoi(temp.c_str());
}


int string_Has_Num(string &in, char c);
string IsDClegal(String^in)
{
	string temp = T_to_string(in);
	if (string_Has_Num(temp, '.') != 1) return "";
	size_t pos = temp.find('.', 0);
	if (pos + 3 != temp.length()) return "";
	for (int i = 0; i < temp.length(); i++) {
		if (  (temp[i] < '0' || temp[i] > '9') && temp[i] != '.') return "";
	}
	return temp;
}


int GetDcNum(string &out) {
	size_t pos = out.find('.', 0);
	int zs = atoi(out.substr(0, pos).c_str());
	int fs = atoi(out.substr(pos+1, 2).c_str());
	int r = zs * 100 + fs;
	return r;
}

int string_Has_Num(string &in,char c) {
	auto occurrences = [&in, c]() {
		size_t pos, pre = 0, count = 0;
		while ((pos = in.find(c, pre)) != std::string::npos) {
			++count;
			pre = pos + 1;
		}
		return count;
	};

	return occurrences();
}

String^ DcNumToString(uint in ,uint DcSymbol)
{
	uint zs = in / 100;
	uint xs = in % 100;

	String ^s;
	if (DcSymbol == 0) {
		s = "";
	}
	else {
		s = "-";
	}

	return  s + gcnew String(zs.ToString() + "." + xs.ToString());
}