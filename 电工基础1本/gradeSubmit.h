#pragma once


#include<map>
using namespace std;


#define uint unsigned int 


/*****实验编号****/

 static map<int, string> Grades = {
	{ 1,"元件伏安特性测试" },
	{ 2,"基尔霍夫定理" },
	{ 3,"叠加原理" },
	{ 6,"一阶电路的响应测试"},
};


#pragma pack(push,1)

struct FileHead
{
	int Len; //头长度
	int Version; // 版本
	int Recdlen; // 记录长度
	int Date;    // 日期
};

struct Head {
	char RequestType[50]; //请求类型 SAVEFILE|RETMSG|
	char MsgType[50];  // 报文类型 XML/JSON/PIC
	int TrialCode; 
	char TrialName[100];
	char DateTime[20]; //20180528-165401
	char Pupilage[150]; // 学生身份
	char FileName[200]; //文件名称
};

#define HEADFIRSTLEN sizeof(Head)
//基尔霍夫定理实验结构体  
//relative error = r_v
//measured value = m_v
//calculated value = c_v
struct KirchhoffTheorem {
	int I1_c_v; //计算值 
	int I1_m_v; //测量值
	int I1_r_e; //相对误差
	int I2_c_v; //计算值
	int I2_m_v; //测量值
	int I2_r_e; //相对误差
	int I3_c_v; //计算值
	int I3_m_v; //测量值
	int I3_r_e; //相对误差
	int U11_c_v; //计算值
	int U11_m_v; //测量值
	int U11_r_e; //相对误差
	int U12_c_v; //计算值
	int U12_m_v; //测量值
	int U12_r_e; //相对误差
	int Ufa_c_v; //计算值
	int Ufa_m_v; //测量值
	int Ufa_r_e; //相对误差
	int Uab_c_v; //计算值
	int Uab_m_v; //测量值
	int Uab_r_e; //相对误差
	int Uad_c_v; //计算值
	int Uad_m_v; //测量值
	int Uad_r_e; //相对误差
	int Ucd_c_v; //计算值
	int Ucd_m_v; //测量值
	int Ucd_r_e; //相对误差
	int Ude_c_v; //计算值
	int Ude_m_v; //测量值
	int Ude_r_e; //相对误差
};
#pragma pack(pop)

