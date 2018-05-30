#pragma once
#include "BChar.h"
#include "CThreadMan.h"
#include "CMysql.h"
#pragma pack(1)

extern CMysql Mysql;

struct SUserAllInfo
{ //用户所有的信息
	SUserAllInfo() { memset(this, 0x00, sizeof(SUserAllInfo)); }
	int Uid;
	char UName[50];
	int port;
	char Ip[16];
	SOCKET SockC;
};


struct SLogin
{
	char Name[50];
	char Password[50];
	int uid;
};

typedef void *(*ServManEntry)(SUserAllInfo *);

class CServMan
{
private:
	SOCKET SockS;
	WSADATA WsaData;
	ServManEntry CliFunEntry;
public:
	bool BSend(const SOCKET &cli, BChar &BSendBuff);
	bool BRecv(const SOCKET &cli, BChar &BRecvBuff, int RecvLen);
	CServMan();
	~CServMan();
	bool SevInit();
	void SetCliEntryFun(ServManEntry CliEntry);
	void LoopADDCli(CThreadMan *ThreadMan);
	void CliClose(SOCKET &SockC);
	void SerDestroy();

	//针对用户的一些封装的接口
	int Login(SOCKET SockC, SLogin &logindata);

};

extern CServMan ServMan;
extern CThreadMan ThreadMan;
extern CMysql Mysql;
extern CLOG MLOG;