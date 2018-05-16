#include "tool.h"

using namespace Threading;

//测试日志
void testForLog() {
	LOG_ERROR("单元测试 错误日志");
	LOG_DEBUG("单元测试 调试");
	LOG_DETAIL("单元测试 详细日志");
}

MsgQueue mq;
//测试 消息队列
void MQRecv() {
	while (1) {
		string c = mq.Consume();
		MessageBox::Show(gcnew String(c.c_str()));
	}
}

void testForMessageQueue() {
	mq.QueueRegister(string("测试消息队列"));
	if (!mq.QueueEnable) {
		MessageBox::Show(gcnew String("创建消息队列失败，消息线程退出"));
	}
	Thread^ t = gcnew Thread(gcnew ThreadStart(MQRecv));
	t->Start();
	mq.Publish(string("我是first"));
	mq.Publish(string("我是second"));
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
	tbody.trial_name = "实验1";
	tbody.trial_data = "你好";
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

	S_PLCRecv r =   sh->GetliKongData();
	LOG_DETAIL(r.Fhz);
	LOG_DETAIL(r.U);
	r = sh->GetliKongData();
	LOG_DETAIL(r.Fhz);
	LOG_DETAIL(r.U);
	r = sh->GetliKongData();
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

	scs->SetDirectVoltage(9);
	scs->SetDirectCurrent(2);
	scs->SetAlternatingVoltage('A', 20);


	scs->SerialHandleClose();
}