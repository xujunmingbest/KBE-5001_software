#pragma once

namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 一阶电路的响应测试实验目的 摘要
	/// </summary>
	public ref class 一阶电路的响应测试实验目的 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试实验目的(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~一阶电路的响应测试实验目的()
		{
			global::voice->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(44, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1045, 383);
			this->panel1->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(14, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1024, 50);
			this->label5->TabIndex = 9;
			this->label5->Text = L"4．进一步学会用示波器测绘图形。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(19, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1024, 38);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3．掌握有关微分电路和积分电路的概念。";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(19, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1024, 39);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2．学习电路时间常数的测量方法。";
			this->label3->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验目的::label3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(880, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验目的::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(753, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"停止";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验目的::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"实验目的";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(19, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1024, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．测定RC一阶电路的零输入响应，零状态响应及完全响应。";
			// 
			// 一阶电路的响应测试实验目的
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1326, 777);
			this->Controls->Add(this->panel1);
			this->Name = L"一阶电路的响应测试实验目的";
			this->Text = L"一阶电路的响应测试实验目的";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	global::voice->Speak(label1->Text +
		label2->Text + label3->Text + label4->Text  );
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	global::voice->Close();
}
};
}
