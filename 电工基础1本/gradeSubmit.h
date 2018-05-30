#pragma once


#include<map>
using namespace std;

#define uint unsigned int 


/*****ʵ����****/


struct GradeSubmit {
	map<int, string> Grades = {
		{ 1,"Ԫ���������Բ���" },
		{ 2,"����������" },
	};
};

#pragma pack(push,1)

struct FileHead
{
	int Len; //ͷ����
	int Version; // �汾
	int Recdlen; // ��¼����
	int Date;    // ����
};

struct Head {
	int TrialCode;
	char TrialName[100];
	char DateTime[20]; //20180528-165401
};

//����������ʵ��ṹ��  
//relative error = r_v
//measured value = m_v
//calculated value = c_v
struct KirchhoffTheorem {
	char StuName[100];
	uint XueHao;
	char DateTime[20];
	int I1_c_v; //����ֵ 
	int I1_m_v; //����ֵ
	int I1_r_e; //������
	int I2_c_v; //����ֵ
	int I2_m_v; //����ֵ
	int I2_r_e; //������
	int I3_c_v; //����ֵ
	int I3_m_v; //����ֵ
	int I3_r_e; //������
	int U11_c_v; //����ֵ
	int U11_m_v; //����ֵ
	int U11_r_e; //������
	int U12_c_v; //����ֵ
	int U12_m_v; //����ֵ
	int U12_r_e; //������
	int Ufa_c_v; //����ֵ
	int Ufa_m_v; //����ֵ
	int Ufa_r_e; //������
	int Uab_c_v; //����ֵ
	int Uab_m_v; //����ֵ
	int Uab_r_e; //������
	int Uad_c_v; //����ֵ
	int Uad_m_v; //����ֵ
	int Uad_r_e; //������
	int Ucd_c_v; //����ֵ
	int Ucd_m_v; //����ֵ
	int Ucd_r_e; //������
	int Ude_c_v; //����ֵ
	int Ude_m_v; //����ֵ
	int Ude_r_e; //������
};
#pragma pack(pop)

