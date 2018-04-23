#pragma once
#include "实验1Main.h"
#include "tool.h"
#include "LoginWnd.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// mainWnd 摘要
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
			//TODO:  在此处添加构造函数代码
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
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::ToolStripMenuItem^  实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  元件伏安特性的测试ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->元件伏安特性的测试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->实验ToolStripMenuItem,
					this->退出ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(772, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->元件伏安特性的测试ToolStripMenuItem });
			this->实验ToolStripMenuItem->Name = L"实验ToolStripMenuItem";
			this->实验ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->实验ToolStripMenuItem->Text = L"实验";
			// 
			// 元件伏安特性的测试ToolStripMenuItem
			// 
			this->元件伏安特性的测试ToolStripMenuItem->Name = L"元件伏安特性的测试ToolStripMenuItem";
			this->元件伏安特性的测试ToolStripMenuItem->Size = System::Drawing::Size(268, 26);
			this->元件伏安特性的测试ToolStripMenuItem->Text = L"实验一 元件伏安特性的测试";
			this->元件伏安特性的测试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::元件伏安特性的测试ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
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
			this->Text = L"电工基础1本";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*
  实验1Main


*/

		实验1Main ^ 实验1MainWnd;
	private: System::Void 元件伏安特性的测试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验1MainIsOpened == true)
		{
			实验1MainWnd->BringToFront(); //这个可以置于最前面
			实验1MainWnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验1MainWnd = gcnew 实验1Main;
		实验1MainWnd->Show();
		实验1MainWnd->WindowState = FormWindowState::Maximized;
		this->Visible = false;
	}
	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
