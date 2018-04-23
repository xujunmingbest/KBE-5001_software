#pragma once
#include "ʵ��1Main.h"
#include "tool.h"
#include "LoginWnd.h"
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
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			Thread ^c = gcnew Thread(gcnew ThreadStart(this, &mainWnd::C));
			c->Start();
			c->IsBackground = true;

			//ShowLoginWnd();


			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

		void ShowLoginWnd() {
			bool Success = false;
			LoginWnd ^ lw = gcnew LoginWnd(Success);
			lw->ShowDialog();
		}


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
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ԫ���������ԵĲ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ԫ���������ԵĲ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ʵ��ToolStripMenuItem,
					this->�˳�ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(772, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ԫ���������ԵĲ���ToolStripMenuItem });
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��";
			// 
			// Ԫ���������ԵĲ���ToolStripMenuItem
			// 
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Name = L"Ԫ���������ԵĲ���ToolStripMenuItem";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Size = System::Drawing::Size(268, 26);
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Text = L"ʵ��һ Ԫ���������ԵĲ���";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::Ԫ���������ԵĲ���ToolStripMenuItem_Click);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(772, 532);
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
};
}
