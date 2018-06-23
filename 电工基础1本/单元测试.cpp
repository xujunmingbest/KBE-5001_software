#include "tool.h"

using namespace Threading;

//������־
void testForLog() {
	LOG_ERROR("��Ԫ���� ������־");
	LOG_DEBUG("��Ԫ���� ����");
	LOG_DETAIL("��Ԫ���� ��ϸ��־");
}
void testForSysLOG()
{
	SYS_LOG_ERROR("��Ԫ����ϵͳ����");
	SYS_LOG_INF("��Ԫ����ϵͳ��Ϣ");
}
MsgQueue mq;
//���� ��Ϣ����
void MQRecv() {
	while (1) {
		string c = mq.Consume();
		MessageBox::Show(gcnew String(c.c_str()));
	}
}

void testForMessageQueue() {
	mq.QueueRegister(string("������Ϣ����"));
	if (!mq.QueueEnable) {
		MessageBox::Show(gcnew String("������Ϣ����ʧ�ܣ���Ϣ�߳��˳�"));
	}
	mq.Publish(string("����first"));
	mq.Publish(string("����second"));

	Thread^ t = gcnew Thread(gcnew ThreadStart(MQRecv));
	t->Start();
}


ThreeSegmentTransmissionProtocol tstp;
void TstpRecv() {
	while(1) {
		TSTPBody tbody = tstp.ProtocolRecv();
		if (!tstp.Enabled) {
			return;
		}
		MessageBox::Show(gcnew String(tbody.trial_name.c_str()));
	}
}



void testForThreeSegmentTransmissionProtocol()
{
	tstp.initParam(string("mac1"), configXml.DesMac);
	tstp.ProtocolStart("47.94.219.135","10001");
	TSTPBody tbody;
	tbody.trial_name = "ʵ��1";
	tbody.trial_data = "���";
	tstp.ProtocolSend(tbody);
	Thread^ t = gcnew Thread(gcnew ThreadStart(TstpRecv));
	t->Start();
}

void testForSerialControl()
{
	SerialHandle^ sh = global::sh;

	//SerialHandle^ sh = gcnew SerialHandle;
	sh->SerialHandleInit();
	sh->MonitorTesterId(9);

	LOG_DETAIL( sh->GetMonitorTesterId());

	S_PLCRecv r;
    sh->GetliKongData(&r);
	LOG_DETAIL(r.Fhz);
	LOG_DETAIL(r.U);
	sh->GetliKongData(&r);
	LOG_DETAIL(r.U);	LOG_DETAIL(r.Fhz);

	sh->GetliKongData(&r);
	LOG_DETAIL(r.Fhz);
	LOG_DETAIL(r.U);
	sh->SerialHandleClose();
}


void testForSerialControlSource()
{
	SerialControlSource^ scs = global::scs;
	scs->SerialHandleInit();

	scs->CloseSource(1);
	scs->OpenSource(1);


	String^ q = "15.00";
	string o = IsDClegal(q);
	if (o == "") LOG_FATAL("���Ϸ�");
	LOG_DETAIL(GetDcNum(o));
	scs->SetDirectVoltage(GetDcNum(o));
	scs->SetDirectCurrent(200);
	Sleep(1000);
	scs->SetAlternatingVoltage('A', 20);


	scs->SerialHandleClose();
}