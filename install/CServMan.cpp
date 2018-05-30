#include "CServMan.h"

bool CServMan::BSend(const SOCKET &cli, BChar &BSendBuff)
{
	int LenNeed = BSendBuff.ToTalLength();
	int ActualLen = 0;
	while (ActualLen < LenNeed)
	{
		int len = send(cli, BSendBuff.GetData() + ActualLen, LenNeed - ActualLen, NULL);
		if (len < 1) 
		{
			if (errno == EINTR || errno == EWOULDBLOCK || errno == EAGAIN) continue;
			else return false;
		}
		ActualLen += len;
	}
	return true;
}
bool CServMan::BRecv(const SOCKET &cli, BChar &BRecvBuff, int RecvLen)
{
	BRecvBuff.KaiPiNeiCun(RecvLen);
	int ActualLen = 0;
	while (ActualLen < RecvLen)
	{
		int len = recv(cli, BRecvBuff.GetData() + ActualLen, RecvLen - ActualLen, NULL);
		if (len < 1)
		{
			if (errno == EINTR || errno == EWOULDBLOCK || errno == EAGAIN) continue;
			else return false;
		}
		ActualLen += len;
	}
	return true;
}
CServMan::CServMan()
{
	CliFunEntry = NULL;
	SockS = INVALID_SOCKET;
}
CServMan::~CServMan()
{
	SerDestroy();
}
bool CServMan::SevInit()
{
	SerDestroy();
	WSAStartup(MAKEWORD(2, 2), &WsaData);
	SockS = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	sockaddr_in SeverAddr;
	SeverAddr.sin_family = PF_INET;
	SeverAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	SeverAddr.sin_port = htons(9000);
	bind(SockS, (SOCKADDR*)&SeverAddr, sizeof(SOCKADDR));
	if (listen(SockS, 1) == 0)
	{
		cout << "服务程序已启动" << endl;
		return true;
	}
	else
	{
		cout << "服务程序启动失败，服务退出" << endl;
		return false;
	}
}
void CServMan::SetCliEntryFun(ServManEntry CliEntry)
{
	CliFunEntry = CliEntry;
}
void CServMan::LoopADDCli(CThreadMan *ThreadMan)
{
	SOCKET SockC;
	sockaddr_in CliAddr;
	int Len = sizeof(SOCKADDR);
	while (1)
	{
		SockC = accept(SockS, (SOCKADDR*)&CliAddr, &Len);
		if (SockC == SOCKET_ERROR) continue;
		if (ThreadMan->ThreadIsFull()) { closesocket(SockC); Sleep(1000);  continue; }
		SUserAllInfo UserAllInfo;
		snprintf(UserAllInfo.Ip,16,"%s", inet_ntoa(CliAddr.sin_addr));
		UserAllInfo.port = ntohs(CliAddr.sin_port);
		UserAllInfo.SockC = SockC;
		ThreadMan->ManCreateThread((LPTHREAD_START_ROUTINE)CliFunEntry, &UserAllInfo);
	}
}

void CServMan::CliClose(SOCKET &SockC)
{
	closesocket(SockC);
}

void CServMan::SerDestroy()
{
	if(SockS!= INVALID_SOCKET) closesocket(SockS);
	SockS = INVALID_SOCKET;
	WSACleanup();
}


int CServMan::Login(SOCKET SockC, SLogin &logindata)
{
	BChar BRecvB;
	int Len = sizeof(SLogin);
	if (!ServMan.BRecv(SockC, BRecvB, Len)) return  DISCONNECT;
	memcpy(&logindata, BRecvB.GetData(), Len);
	logindata.uid = Mysql.GetUserUid(logindata.Name, logindata.Password);
	BChar BSendB;
	BSendB.BCat((char*)&logindata, Len);
	if (!ServMan.BRecv(SockC, BSendB, Len)) return  DISCONNECT;
	return logindata.uid;
}
