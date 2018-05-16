#pragma once
 
#include "基尔霍夫定律实验目的.h"
#include "基尔霍夫定律实验原理.h"
#include "基尔霍夫定律实验器件.h"
#include "基尔霍夫定律实验步骤.h"
#include "基尔霍夫定律实验内容.h"
#include "基尔霍夫定理原理动画.h"

extern bool 基尔霍夫定律IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律 摘要
	/// </summary>
	public ref class 基尔霍夫定律 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律(void)
		{
			InitializeComponent();
			基尔霍夫定律IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));



			//
			//TODO:  在此处添加构造函数代码
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律()
		{
			基尔霍夫定律IsOpened = false;
			g_c.Start();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  实验目的ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  原理原理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验器件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验步骤ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  通讯协议ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  返回ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  动画展示ToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验目的ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->原理原理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验器件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验步骤ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->通讯协议ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->返回ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->动画展示ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->实验目的ToolStripMenuItem,
					this->原理原理ToolStripMenuItem, this->实验器件ToolStripMenuItem, this->实验步骤ToolStripMenuItem, this->通讯协议ToolStripMenuItem, this->返回ToolStripMenuItem,
					this->动画展示ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(121, 561);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::实验目的ToolStripMenuItem_Click);
			// 
			// 原理原理ToolStripMenuItem
			// 
			this->原理原理ToolStripMenuItem->Name = L"原理原理ToolStripMenuItem";
			this->原理原理ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->原理原理ToolStripMenuItem->Text = L"实验原理";
			this->原理原理ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::原理原理ToolStripMenuItem_Click);
			// 
			// 实验器件ToolStripMenuItem
			// 
			this->实验器件ToolStripMenuItem->Name = L"实验器件ToolStripMenuItem";
			this->实验器件ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->实验器件ToolStripMenuItem->Text = L"实验器件";
			this->实验器件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::实验器件ToolStripMenuItem_Click);
			// 
			// 实验步骤ToolStripMenuItem
			// 
			this->实验步骤ToolStripMenuItem->Name = L"实验步骤ToolStripMenuItem";
			this->实验步骤ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->实验步骤ToolStripMenuItem->Text = L"实验步骤";
			this->实验步骤ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::实验步骤ToolStripMenuItem_Click);
			// 
			// 通讯协议ToolStripMenuItem
			// 
			this->通讯协议ToolStripMenuItem->Name = L"通讯协议ToolStripMenuItem";
			this->通讯协议ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->通讯协议ToolStripMenuItem->Text = L"实验内容";
			this->通讯协议ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::通讯协议ToolStripMenuItem_Click);
			// 
			// 返回ToolStripMenuItem
			// 
			this->返回ToolStripMenuItem->Name = L"返回ToolStripMenuItem";
			this->返回ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->返回ToolStripMenuItem->Text = L"返回";
			this->返回ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::返回ToolStripMenuItem_Click);
			// 
			// 动画展示ToolStripMenuItem
			// 
			this->动画展示ToolStripMenuItem->Name = L"动画展示ToolStripMenuItem";
			this->动画展示ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->动画展示ToolStripMenuItem->Text = L"动画展示";
			this->动画展示ToolStripMenuItem->Click += gcnew System::EventHandler(this, &基尔霍夫定律::动画展示ToolStripMenuItem_Click);
			// 
			// 基尔霍夫定律
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 561);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"基尔霍夫定律";
			this->Text = L"基尔霍夫定律";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律::基尔霍夫定律_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		基尔霍夫定律实验目的^ 基尔霍夫定律实验目的Wnd;
		基尔霍夫定律实验原理^ 基尔霍夫定律实验原理Wnd;
		基尔霍夫定律实验器件^ 基尔霍夫定律实验器件Wnd;
		基尔霍夫定律实验步骤^ 基尔霍夫定律实验步骤Wnd;
		基尔霍夫定律实验内容^ 基尔霍夫定律实验内容Wnd;
		基尔霍夫定理原理动画^ 基尔霍夫定理原理动画Wnd;
	private: System::Void 实验目的ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (基尔霍夫定律实验目的IsOpened == true)
		{
			基尔霍夫定律实验目的Wnd->BringToFront(); //这个可以置于最前面
			基尔霍夫定律实验目的Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		基尔霍夫定律实验目的Wnd = gcnew 基尔霍夫定律实验目的;
		基尔霍夫定律实验目的Wnd->MdiParent = this;
		基尔霍夫定律实验目的Wnd->Show();
		基尔霍夫定律实验目的Wnd->WindowState = FormWindowState::Maximized;
	
	}
private: System::Void 基尔霍夫定律_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 原理原理ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (基尔霍夫定律实验原理IsOpened == true)
	{
		基尔霍夫定律实验原理Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律实验原理Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律实验原理Wnd = gcnew 基尔霍夫定律实验原理;
	基尔霍夫定律实验原理Wnd->MdiParent = this;
	基尔霍夫定律实验原理Wnd->Show();
	基尔霍夫定律实验原理Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验器件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (基尔霍夫定律实验器件IsOpened == true)
	{
		基尔霍夫定律实验器件Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律实验器件Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律实验器件Wnd = gcnew 基尔霍夫定律实验器件;
	基尔霍夫定律实验器件Wnd->MdiParent = this;
	基尔霍夫定律实验器件Wnd->Show();
	基尔霍夫定律实验器件Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 实验步骤ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (基尔霍夫定律实验步骤IsOpened == true)
	{
		基尔霍夫定律实验步骤Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律实验步骤Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律实验步骤Wnd = gcnew 基尔霍夫定律实验步骤;
	基尔霍夫定律实验步骤Wnd->MdiParent = this;
	基尔霍夫定律实验步骤Wnd->Show();
	基尔霍夫定律实验步骤Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void 通讯协议ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (基尔霍夫定律实验内容IsOpened == true)
	{
		基尔霍夫定律实验内容Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律实验内容Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律实验内容Wnd = gcnew 基尔霍夫定律实验内容;
	基尔霍夫定律实验内容Wnd->MdiParent = this;
	基尔霍夫定律实验内容Wnd->Show();
	基尔霍夫定律实验内容Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void 返回ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 动画展示ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (基尔霍夫定理原理动画IsOpened == true)
	{
		基尔霍夫定理原理动画Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定理原理动画Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定理原理动画Wnd = gcnew 基尔霍夫定理原理动画;
	基尔霍夫定理原理动画Wnd->MdiParent = this;
	基尔霍夫定理原理动画Wnd->Show();
	基尔霍夫定理原理动画Wnd->WindowState = FormWindowState::Maximized;
}
};
}
