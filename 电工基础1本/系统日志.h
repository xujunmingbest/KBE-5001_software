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
		Thread ^ t;
		void LogRecv() {
			Thread::Sleep(500);
			while (1) {
				string o = SysLogQue.Consume();
				SysLogOutPut(o.c_str()[0], gcnew String(o.c_str() + 1));
			}
		}

		void SysLogOutPut(int log_type,String ^c) {
			//MessageBox::Show("1111111");
			richTextBox1->AppendText(c + "\n");
			richTextBox1->SelectionStart = richTextBox1->TextLength - c->Length - 1;
			richTextBox1->SelectionLength = c->Length;
			switch (log_type) {
			case _SYS_ERROR:richTextBox1->SelectionColor = Color::Red;  break;
			case _SYS_INFO:richTextBox1->SelectionColor = Color::Green; break;
			default:
				return;
			}
			richTextBox1->SelectionStart = richTextBox1->Text->Length;
			richTextBox1->SelectionLength = 0;
			richTextBox1->Focus();
		
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
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1042, 624);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// ϵͳ��־
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 624);
			this->ControlBox = false;
			this->Controls->Add(this->richTextBox1);
			this->Name = L"ϵͳ��־";
			this->Text = L"ϵͳ��־";
			this->Load += gcnew System::EventHandler(this, &ϵͳ��־::ϵͳ��־_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ϵͳ��־_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
