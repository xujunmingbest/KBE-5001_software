#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace 电工基础1本 {

	/// <summary>
	/// LedWatch 摘要
	/// </summary>
	public ref class LedWatch : public System::Windows::Forms::UserControl
	{
	public:
		LedWatch(void)
		{
			InitializeComponent();
			ledCtrl1->SectionThick = 10;
			ledCtrl2->SectionThick = 10;
			ledCtrl3->SectionThick = 10;
			ledCtrl4->SectionThick = 10;
			ledCtrl5->SectionThick = 10;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LedWatch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: UserLedTest::LedCtrl^  ledCtrl5;
	private: UserLedTest::LedCtrl^  ledCtrl4;
	private: UserLedTest::LedCtrl^  ledCtrl3;
	private: UserLedTest::LedCtrl^  ledCtrl2;
	private: UserLedTest::LedCtrl^  ledCtrl1;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ledCtrl5 = (gcnew UserLedTest::LedCtrl());
			this->ledCtrl4 = (gcnew UserLedTest::LedCtrl());
			this->ledCtrl3 = (gcnew UserLedTest::LedCtrl());
			this->ledCtrl2 = (gcnew UserLedTest::LedCtrl());
			this->ledCtrl1 = (gcnew UserLedTest::LedCtrl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->ledCtrl5);
			this->groupBox2->Controls->Add(this->ledCtrl4);
			this->groupBox2->Controls->Add(this->ledCtrl3);
			this->groupBox2->Controls->Add(this->ledCtrl2);
			this->groupBox2->Controls->Add(this->ledCtrl1);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(424, 146);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"电压表1";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &LedWatch::groupBox2_Enter);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(270, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 10);
			this->label6->TabIndex = 14;
			// 
			// ledCtrl5
			// 
			this->ledCtrl5->AutoSize = true;
			this->ledCtrl5->BackColor = System::Drawing::Color::Black;
			this->ledCtrl5->DisplayCode = static_cast<System::Byte>(55);
			this->ledCtrl5->DisplayNumber = 2;
			this->ledCtrl5->DrawSectionBorder = true;
			this->ledCtrl5->ForeColor = System::Drawing::Color::Lime;
			this->ledCtrl5->Location = System::Drawing::Point(350, 31);
			this->ledCtrl5->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ledCtrl5->Name = L"ledCtrl5";
			this->ledCtrl5->OffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ledCtrl5->SectionThick = 4;
			this->ledCtrl5->Size = System::Drawing::Size(60, 102);
			this->ledCtrl5->TabIndex = 4;
			// 
			// ledCtrl4
			// 
			this->ledCtrl4->AutoSize = true;
			this->ledCtrl4->BackColor = System::Drawing::Color::Black;
			this->ledCtrl4->DisplayCode = static_cast<System::Byte>(55);
			this->ledCtrl4->DisplayNumber = 2;
			this->ledCtrl4->DrawSectionBorder = true;
			this->ledCtrl4->ForeColor = System::Drawing::Color::Lime;
			this->ledCtrl4->Location = System::Drawing::Point(287, 31);
			this->ledCtrl4->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ledCtrl4->Name = L"ledCtrl4";
			this->ledCtrl4->OffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ledCtrl4->SectionThick = 4;
			this->ledCtrl4->Size = System::Drawing::Size(60, 102);
			this->ledCtrl4->TabIndex = 3;
			// 
			// ledCtrl3
			// 
			this->ledCtrl3->AutoSize = true;
			this->ledCtrl3->BackColor = System::Drawing::Color::Black;
			this->ledCtrl3->DisplayCode = static_cast<System::Byte>(55);
			this->ledCtrl3->DisplayNumber = 2;
			this->ledCtrl3->DrawSectionBorder = true;
			this->ledCtrl3->ForeColor = System::Drawing::Color::Lime;
			this->ledCtrl3->Location = System::Drawing::Point(206, 31);
			this->ledCtrl3->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ledCtrl3->Name = L"ledCtrl3";
			this->ledCtrl3->OffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ledCtrl3->SectionThick = 4;
			this->ledCtrl3->Size = System::Drawing::Size(60, 102);
			this->ledCtrl3->TabIndex = 2;
			// 
			// ledCtrl2
			// 
			this->ledCtrl2->AutoSize = true;
			this->ledCtrl2->BackColor = System::Drawing::Color::Black;
			this->ledCtrl2->DisplayCode = static_cast<System::Byte>(55);
			this->ledCtrl2->DisplayNumber = 2;
			this->ledCtrl2->DrawSectionBorder = true;
			this->ledCtrl2->ForeColor = System::Drawing::Color::Lime;
			this->ledCtrl2->Location = System::Drawing::Point(143, 31);
			this->ledCtrl2->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ledCtrl2->Name = L"ledCtrl2";
			this->ledCtrl2->OffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ledCtrl2->SectionThick = 4;
			this->ledCtrl2->Size = System::Drawing::Size(60, 102);
			this->ledCtrl2->TabIndex = 1;
			// 
			// ledCtrl1
			// 
			this->ledCtrl1->AutoSize = true;
			this->ledCtrl1->BackColor = System::Drawing::Color::Black;
			this->ledCtrl1->DisplayCode = static_cast<System::Byte>(55);
			this->ledCtrl1->DisplayNumber = 2;
			this->ledCtrl1->DrawSectionBorder = true;
			this->ledCtrl1->ForeColor = System::Drawing::Color::Lime;
			this->ledCtrl1->Location = System::Drawing::Point(80, 31);
			this->ledCtrl1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->ledCtrl1->Name = L"ledCtrl1";
			this->ledCtrl1->OffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ledCtrl1->SectionThick = 4;
			this->ledCtrl1->Size = System::Drawing::Size(60, 102);
			this->ledCtrl1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Lime;
			this->label1->Location = System::Drawing::Point(16, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 10);
			this->label1->TabIndex = 15;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// LedWatch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox2);
			this->Name = L"LedWatch";
			this->Size = System::Drawing::Size(424, 146);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}

	public:void SetTitle(String^in) {
		groupBox2->Text = in;
	}

		   public: void SetValue(int V) {
			   int TV = 0;
			   if (V < 0)
			   {
				   label1->Visible = true;
				   TV = -V;
			   }
			   else
			   {
				   label1->Visible = false;
				   TV = V;
			   }
			   int l1 = V / 10000;
			   int l2 = (V % 10000) / 1000;
			   int l3 = (V % 1000) / 100;
			   int l4 = (V % 100) / 10;
			   int l5 = (V % 10);
			   
			   ledCtrl1->DisplayNumber = l1;
			   ledCtrl2->DisplayNumber = l2;
			   ledCtrl3->DisplayNumber = l3;
			   ledCtrl4->DisplayNumber = l4;
			   ledCtrl5->DisplayNumber = l5;
		   }

};
}
