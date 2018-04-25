#pragma once
#include "tool.h"
#include "实验1实验目的.h"
#include "实验1原理说明.h"
#include "实验1原理说明视频.h"
#include "实验1实验设备.h"
#include "实验1实验内容1.h"
#include "实验1实验报告.h"
#include "实验1思考题.h"
#include "实验1实验注意事项.h"


extern bool 实验1MainIsOpened ;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1Main 摘要
	/// </summary>
	public ref class 实验1Main : public System::Windows::Forms::Form
	{
	public:
		实验1Main(void)
		{
			InitializeComponent();
			实验1MainIsOpened = true;
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1Main()
		{
			实验1MainIsOpened = false;

			//返回显示子窗体
			g_c.Start();
			// 关闭所有mdi子窗体
			for (int i = 0; i < this->MdiChildren->Length; i++)
			{
				this->MdiChildren[i]->Close();
			}
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  原理说明ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  视频说明ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  文字说明ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验设备ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验内容ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验注意事项ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  思考题ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验报告ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  返回ToolStripMenuItem;
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
			this->原理说明ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->视频说明ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->文字说明ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验设备ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验内容ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验注意事项ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->思考题ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验报告ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->返回ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->实验ToolStripMenuItem,
					this->原理说明ToolStripMenuItem, this->实验设备ToolStripMenuItem, this->实验内容ToolStripMenuItem, this->实验注意事项ToolStripMenuItem, this->思考题ToolStripMenuItem,
					this->实验报告ToolStripMenuItem, this->返回ToolStripMenuItem, this->退出ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(117, 432);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &实验1Main::menuStrip1_ItemClicked);
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->Name = L"实验ToolStripMenuItem";
			this->实验ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->实验ToolStripMenuItem->Text = L"实验目的";
			this->实验ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::实验ToolStripMenuItem_Click);
			// 
			// 原理说明ToolStripMenuItem
			// 
			this->原理说明ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->视频说明ToolStripMenuItem,
					this->文字说明ToolStripMenuItem
			});
			this->原理说明ToolStripMenuItem->Name = L"原理说明ToolStripMenuItem";
			this->原理说明ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->原理说明ToolStripMenuItem->Text = L"原理说明";
			// 
			// 视频说明ToolStripMenuItem
			// 
			this->视频说明ToolStripMenuItem->Name = L"视频说明ToolStripMenuItem";
			this->视频说明ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->视频说明ToolStripMenuItem->Text = L"视频说明";
			this->视频说明ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::视频说明ToolStripMenuItem_Click);
			// 
			// 文字说明ToolStripMenuItem
			// 
			this->文字说明ToolStripMenuItem->Name = L"文字说明ToolStripMenuItem";
			this->文字说明ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->文字说明ToolStripMenuItem->Text = L"文字说明";
			this->文字说明ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::文字说明ToolStripMenuItem_Click);
			// 
			// 实验设备ToolStripMenuItem
			// 
			this->实验设备ToolStripMenuItem->Name = L"实验设备ToolStripMenuItem";
			this->实验设备ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->实验设备ToolStripMenuItem->Text = L"实验设备";
			this->实验设备ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::实验设备ToolStripMenuItem_Click);
			// 
			// 实验内容ToolStripMenuItem
			// 
			this->实验内容ToolStripMenuItem->Name = L"实验内容ToolStripMenuItem";
			this->实验内容ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->实验内容ToolStripMenuItem->Text = L"实验内容";
			this->实验内容ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::实验内容ToolStripMenuItem_Click);
			// 
			// 实验注意事项ToolStripMenuItem
			// 
			this->实验注意事项ToolStripMenuItem->Name = L"实验注意事项ToolStripMenuItem";
			this->实验注意事项ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->实验注意事项ToolStripMenuItem->Text = L"实验注意事项";
			this->实验注意事项ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::实验注意事项ToolStripMenuItem_Click);
			// 
			// 思考题ToolStripMenuItem
			// 
			this->思考题ToolStripMenuItem->Name = L"思考题ToolStripMenuItem";
			this->思考题ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->思考题ToolStripMenuItem->Text = L"思考题";
			this->思考题ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::思考题ToolStripMenuItem_Click);
			// 
			// 实验报告ToolStripMenuItem
			// 
			this->实验报告ToolStripMenuItem->Name = L"实验报告ToolStripMenuItem";
			this->实验报告ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->实验报告ToolStripMenuItem->Text = L"实验报告";
			this->实验报告ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::实验报告ToolStripMenuItem_Click);
			// 
			// 返回ToolStripMenuItem
			// 
			this->返回ToolStripMenuItem->Name = L"返回ToolStripMenuItem";
			this->返回ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->返回ToolStripMenuItem->Text = L"返回";
			this->返回ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1Main::返回ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
			// 
			// 实验1Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 432);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"实验1Main";
			this->Text = L"实验1元件伏安特性测试";
			this->Load += gcnew System::EventHandler(this, &实验1Main::实验1Main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验1实验目的IsOpened == true)
		{
			实验1实验目的Wnd->BringToFront(); //这个可以置于最前面
			实验1实验目的Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验1实验目的Wnd = gcnew 实验1实验目的;
		实验1实验目的Wnd->MdiParent = this;
		实验1实验目的Wnd->Show();
		实验1实验目的Wnd->WindowState = FormWindowState::Maximized;

	}

/*
			 
			 
*/

			 实验1实验目的 ^实验1实验目的Wnd;
			 实验1原理说明 ^实验1原理说明Wnd;
			 实验1原理说明视频 ^实验1原理说明视频Wnd;
			 实验1实验设备 ^实验1实验设备Wnd;
			 实验1实验内容1 ^实验1实验内容1Wnd;
			 实验1实验报告^ 实验1实验报告Wnd;
			 实验1实验注意事项^ 实验1实验注意事项Wnd;
			 实验1思考题^ 实验1思考题Wnd;
private: System::Void 实验1Main_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 文字说明ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1原理说明IsOpened == true)
	{
		实验1原理说明Wnd->BringToFront(); //这个可以置于最前面
		实验1原理说明Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1原理说明Wnd = gcnew 实验1原理说明;
	实验1原理说明Wnd->MdiParent = this;
	实验1原理说明Wnd->Show();
	实验1原理说明Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 视频说明ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1原理说明视频IsOpened == true)
	{
		实验1原理说明视频Wnd->BringToFront(); //这个可以置于最前面
		实验1原理说明视频Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1原理说明视频Wnd = gcnew 实验1原理说明视频;
	//实验1原理说明视频Wnd->MdiParent = this;
	实验1原理说明视频Wnd->Show();
	
}
private: System::Void 实验设备ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1实验设备IsOpened == true)
	{
		实验1实验设备Wnd->BringToFront(); //这个可以置于最前面
		实验1实验设备Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1实验设备Wnd = gcnew 实验1实验设备;
	实验1实验设备Wnd->MdiParent = this;
	实验1实验设备Wnd->Show();
	实验1实验设备Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验内容1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1实验内容1IsOpened == true)
	{
		实验1实验内容1Wnd->BringToFront(); //这个可以置于最前面
		实验1实验内容1Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1实验内容1Wnd = gcnew 实验1实验内容1;
	实验1实验内容1Wnd->MdiParent = this;
	实验1实验内容1Wnd->Show();
	实验1实验内容1Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 返回ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();
}
private: System::Void 实验报告ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		if ( 实验1实验报告IsOpened == true)
		{
			 实验1实验报告Wnd->BringToFront(); //这个可以置于最前面
			 实验1实验报告Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
	 实验1实验报告Wnd = gcnew  实验1实验报告;
	 实验1实验报告Wnd->MdiParent = this;
	 实验1实验报告Wnd->Show();
	 实验1实验报告Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}


private: System::Void 实验注意事项ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1实验注意事项IsOpened == true)
	{
		实验1实验注意事项Wnd->BringToFront(); //这个可以置于最前面
		实验1实验注意事项Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1实验注意事项Wnd = gcnew  实验1实验注意事项;
	实验1实验注意事项Wnd->MdiParent = this;
	实验1实验注意事项Wnd->Show();
	实验1实验注意事项Wnd->WindowState = FormWindowState::Maximized;


}
private: System::Void 思考题ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1思考题IsOpened == true)
	{
		实验1思考题Wnd->BringToFront(); //这个可以置于最前面
		实验1思考题Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1思考题Wnd = gcnew  实验1思考题;
	实验1思考题Wnd->MdiParent = this;
	实验1思考题Wnd->Show();
	实验1思考题Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 实验内容ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (实验1实验内容1IsOpened == true)
	{
		实验1实验内容1Wnd->BringToFront(); //这个可以置于最前面
		实验1实验内容1Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	实验1实验内容1Wnd = gcnew 实验1实验内容1;
	实验1实验内容1Wnd->MdiParent = this;
	实验1实验内容1Wnd->Show();
	实验1实验内容1Wnd->WindowState = FormWindowState::Maximized;
}
};
}
