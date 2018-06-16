

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


int GetDcNum(string &in) {
	size_t pos = in.find('.', 0);
	int zs = atoi(in.substr(0, pos).c_str());
	int fs = atoi(in.substr(pos+1, 2).c_str());
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
	String ^temp;
	if (xs < 10) temp = "0" + xs.ToString();
	else   temp =xs.ToString();
	return  s + gcnew String(zs.ToString() + "." + temp);
}

#define BMPLENGTH 387072
void global::SystemStart()
{
	Exceptioninit(); //全局异常初始化
	PLCRecv = new S_PLCRecv;
	//消息队列初始化 
	MsgQueueRegister();

	//配置文件初始化
	readXmlConfigFile(configXml);
	LOG_DETAIL(configXml.DesMac, configXml.RepeaterIp, configXml.RepeaterPort,
		"力控串口", configXml.SerialHandle, "电源控制", configXml.SerialControlSource,
		configXml.GradeIp, configXml.GradePort);


	//力控模块初始化
	global::sh->SerialHandleInit();
	global::sh->MonitorTesterId(9);
	t = gcnew Thread(gcnew ThreadStart(LiKongMonter));
	t->Start();
	//电源控制模块初始化
	if (!global::scs->SerialHandleInit()) {
		SYS_LOG_ERROR("控制电源模块串口初始化失败");
	}
	oscillograph::oscillographOpen();
}





void global::SystemShortDown()
{
	t->Abort();
	global::scs->SerialHandleClose();
	global::sh->SerialHandleClose();
	delete PLCRecv;
	exit(0);
}

void global::LiKongMonter()
{
	while (1) {
		memset(PLCRecv, 0x00, sizeof(S_PLCRecv));
		Thread::Sleep(1000);
		if (!sh->GetliKongData(PLCRecv))
		{
			if (!sh->SerialHandleInit()) {
				SYS_LOG_ERROR("获取力控数据失败,请检串口连接是不是正常");
				Thread::Sleep(60000);
			}
			continue;
		}
		/*
		try {
			switch (PLCRecv->HeaderId) {
			case 1:	break;
			case 2:break;
			case 3:break;
			case 4:break;
			case 5:break;

			}

		}
		catch (System::Exception ^E) {
			
		}*/
	}
}


void global::SetDV(String^t)
{
	string r = IsDClegal(t);
	if (r.length() == 0) {
		MessageBox::Show("输入数据不合法");
		return;
	}
	int DVNum = GetDcNum(r);
	if (!scs->SetDirectVoltage(DVNum)) {
		MessageBox::Show("设置失败");
		return;
	}
	MessageBox::Show("设置成功");
}