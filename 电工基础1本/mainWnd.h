#pragma once
#include "ʵ��1Main.h"
#include "tool.h"
#include "LoginWnd.h"
#include "����������.h"
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// mainWnd ժҪ
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			c = gcnew Thread(gcnew ThreadStart(this, &mainWnd::C));
			c->Start();
			c->IsBackground = true;
			//this->skinEngine1->SkinFile = "E:\\clr\\�繤����1��\\res\\Ƥ��\\DeepGreen.ssk";
			//ShowLoginWnd();


			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}
		void ShowLoginWnd() {
			bool Success = false;
			LoginWnd ^ lw = gcnew LoginWnd(Success);
			lw->ShowDialog();
			if (!Success)
			{
				exit(-1);
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ʵ��ToolStripMenuItem;

	public:

		Thread ^c;
		void C() {
			while (1) {
				g_c.Stop();
				this->Visible = true;
				this->BringToFront();
			}
		}
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~mainWnd()
		{
			c->Abort();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ԫ���������ԵĲ���ToolStripMenuItem;

	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ԫ���������ԵĲ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ʵ��ToolStripMenuItem,
					this->��������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(772, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainWnd::menuStrip1_ItemClicked);
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Ԫ���������ԵĲ���ToolStripMenuItem,
					this->����������ʵ��ToolStripMenuItem
			});
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��";
			// 
			// Ԫ���������ԵĲ���ToolStripMenuItem
			// 
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Name = L"Ԫ���������ԵĲ���ToolStripMenuItem";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Text = L"Ԫ���������ԵĲ���";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::Ԫ���������ԵĲ���ToolStripMenuItem_Click);
			// 
			// ����������ʵ��ToolStripMenuItem
			// 
			this->����������ʵ��ToolStripMenuItem->Name = L"����������ʵ��ToolStripMenuItem";
			this->����������ʵ��ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->����������ʵ��ToolStripMenuItem->Text = L"����������ʵ��";
			this->����������ʵ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::����������ʵ��ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::��������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(0, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(772, 504);
			this->label1->TabIndex = 1;
			this->label1->Text = L"��ӭʹ�����ڿƽ̽�ѧ���";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &mainWnd::label1_Click);
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(772, 532);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�繤����1��";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*
  ʵ��1Main


*/

		ʵ��1Main ^ ʵ��1MainWnd;
	private: System::Void Ԫ���������ԵĲ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��1MainIsOpened == true)
		{
			ʵ��1MainWnd->BringToFront(); //�������������ǰ��
			ʵ��1MainWnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��1MainWnd = gcnew ʵ��1Main;
		ʵ��1MainWnd->Show();
		ʵ��1MainWnd->WindowState = FormWindowState::Maximized;
		this->Visible = false;
	}
	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}



private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	/*
	//�ڵ��봰��Ӧ����������
	g_TSTP.initParam(string("mac1"), configXml.DesMac);
	g_TSTP.ProtocolStart(configXml.RepeaterIp, configXml.RepeaterPort);
	TSTPBody b;
	g_TSTP.ProtocolSend(b);
	g_TSTP.ProtocolSend(b);
	g_TSTP.ProtocolSend(b);
	while (1) {
		TSTPBody a = g_TSTP.ProtocolRecv();
		MessageBox::Show(gcnew String(a.trial_name.c_str()));
		Json::FastWriter w;
		MessageBox::Show(gcnew String(w.write(a.trial_data).c_str()));
	}
	*/
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}


		 ����������^ ����������Wnd;
private: System::Void ����������ʵ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����������IsOpened == true)
	{
		����������Wnd->BringToFront(); //�������������ǰ��
		����������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������Wnd = gcnew ����������;
	����������Wnd->Show();
	����������Wnd->WindowState = FormWindowState::Maximized;
	this->Visible = false;

}
};
}
