#include "�ײ�.h"
#include "log.h"


namespace �繤����1�� {
	using namespace System::IO::Ports;
	using namespace System::Threading;


	/***************
	clr ���ڿ���Э��
	****************/
	public ref class SerialControl {
		SerialPort^  serialPort1;
	private:
		Thread^ asd;
		void serialPort1Open() {
			serialPort1->Close();
			if (asd) {
				asd->Abort();
			}
			try {
				serialPort1->ReceivedBytesThreshold = 1;
				serialPort1->DataBits = 8;
				serialPort1->Parity = System::IO::Ports::Parity::None; //����żУ��λ
																	   //serialPort1->StopBits = System::IO::Ports::StopBits::One;//����ֹͣλΪ1
				serialPort1->Open(); //���ڴ�
			}
			catch (System::Exception ^e) {
				LOG_ERROR("�򿪴���ʧ��");
				return;
			}
			asd = gcnew Thread(gcnew ThreadStart(this, &SerialControl::Recv));
			asd->Start();
			asd->IsBackground = true;
		}
		void serialPort1Close() {
			serialPort1->Close();
		}
		void Send(cli::array<unsigned char>^ buffer1) {
			int len;
			char *b = new char[len * 2 + 1];
			memset(b, 0x00, len * 2 + 1);
			int alen = strlen(b);
			cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen);
			for (int i = 0; i < len * 2; i++)
			{
				if (b[i] != 0x00) {
					buffer[i] = b[i];
				}
				else {
					break;
				}
			}
			delete[] b;
			try {
				serialPort1->Write(buffer, 0, alen);//����ָ��0x55
				if (alen == 0) {
					throw"����0�ֽ�";
				}
			}
			catch (System::Exception ^e) {
				return;
			}
		}
		void Recv() {
			while (1) {
				cli::array<unsigned char>^ r1buff;
				r1buff = gcnew cli::array<unsigned char>(1);
				cli::array<unsigned char>^ rbuff;
				rbuff = gcnew cli::array<unsigned char>(100);
				int recvlen;
				try {
					recvlen = serialPort1->Read(r1buff, 0, 1);// �����ǿ��Է��� �ַ����� ��ȡ����
					if (recvlen <= 0) {
						throw "�����˳�";
					}
					recvlen += serialPort1->Read(rbuff, 0, 100);// �����ǿ��Է��� �ַ����� ��ȡ����
					if (recvlen <= 0) {
						throw "�����˳�";
					}
				}
				catch (System::Exception ^e) {
					Console::Write(e->ToString());
					return;
				}
				cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(101);
				r1buff->CopyTo(buff, 0);
				rbuff->CopyTo(buff, 1);
				cli::pin_ptr<unsigned char> c = &buff[0];
				char *pinp = (char *)c;
			}
		}
	};


}