#pragma once

extern bool ϵͳ��־IsOpened ;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ϵͳ��־ ժҪ
	/// </summary>
	public ref class ϵͳ��־ : public System::Windows::Forms::Form
	{
	public:
		ϵͳ��־(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ϵͳ��־IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			t = gcnew Thread(gcnew ThreadStart(this, &ϵͳ��־::LogRecv));
			t->Start();
		}
	private: _LogBox::LogBox^  logBox1;
	public:
		Thread ^ t;
		void LogRecv() {
			Thread::Sleep(500);
			while (1) {
				string o = SysLogQue.Consume();

				String^ temp = gcnew String(o.c_str() + 1);
				switch (o.c_str()[0]) {
				case _SYS_ERROR: logBox1->LogErr(temp); break;
				case _SYS_INFO: logBox1->LogInfo(temp); break;
				case _SYS_WARN: logBox1->LogWarn(temp); break;
				}
			}
		}


	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ϵͳ��־()
		{
			ϵͳ��־IsOpened = false;
			t->Abort();
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->SuspendLayout();
			// 
			// logBox1
			// 
			this->logBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logBox1->Location = System::Drawing::Point(0, 0);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(1042, 624);
			this->logBox1->TabIndex = 1;
			this->logBox1->Load += gcnew System::EventHandler(this, &ϵͳ��־::logBox1_Load);
			// 
			// ϵͳ��־
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 624);
			this->ControlBox = false;
			this->Controls->Add(this->logBox1);
			this->Name = L"ϵͳ��־";
			this->Text = L"ϵͳ��־";
			this->Load += gcnew System::EventHandler(this, &ϵͳ��־::ϵͳ��־_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ϵͳ��־_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void logBox1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
