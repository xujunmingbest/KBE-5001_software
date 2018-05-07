#pragma once
#include <windows.h>
#include "tool.h"
extern bool 实验1实验目的IsOpened ;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1实验目的 摘要
	/// </summary>
	public ref class 实验1实验目的 : public System::Windows::Forms::Form
	{
	public:
		实验1实验目的(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验1实验目的IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验目的()
		{
			v->Close();
			实验1实验目的IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"一、实验目的";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(587, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．验证基尔霍夫定律的正确性，加深对基尔霍夫定律的理解。";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 238);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(482, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2．学会用电流插头、插座测量各支路电流的方法。";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(155, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 11;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1实验目的::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(155, 69);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(667, 397);
			this->panel1->TabIndex = 12;
			// 
			// 实验1实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1124, 691);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"实验1实验目的";
			this->Text = L"实验1实验目的";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &实验1实验目的::实验1实验目的_FormClosed);
			this->Load += gcnew System::EventHandler(this, &实验1实验目的::实验1实验目的_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1实验目的_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void 实验1实验目的_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		实验1实验目的IsOpened = false;
	}
			 Voice ^v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label1->Text + 
			label2->Text + label3->Text);
	}

};
}
