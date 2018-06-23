#pragma once
#include "tool.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 串口控制模块 摘要
	/// </summary>
	public ref class 串口控制模块 : public System::Windows::Forms::Form
	{
	public:
		串口控制模块(void)
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
		~串口控制模块()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: _LogBox::LogBox^  logBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(677, 271);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"电源控制模块调试";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(407, 230);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"HZ/100 ,必须9位数字";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 223);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 30);
			this->textBox1->TabIndex = 21;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 220);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 32);
			this->button6->TabIndex = 20;
			this->button6->Text = L"频率选择";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &串口控制模块::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(8, 177);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 32);
			this->button5->TabIndex = 18;
			this->button5->Text = L"波形选择";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &串口控制模块::button5_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"正弦波", L"三角波", L"方波" });
			this->comboBox4->Location = System::Drawing::Point(171, 180);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 17;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 130);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 32);
			this->button4->TabIndex = 16;
			this->button4->Text = L"交流电压测试";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &串口控制模块::button4_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"10", L"11", L"12", L"13", L"14" });
			this->comboBox3->Location = System::Drawing::Point(171, 133);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 32);
			this->button3->TabIndex = 14;
			this->button3->Text = L"直流电压测试";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &串口控制模块::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"9", L"8", L"7" });
			this->comboBox2->Location = System::Drawing::Point(171, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(348, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 32);
			this->button2->TabIndex = 12;
			this->button2->Text = L"关闭";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &串口控制模块::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(243, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 32);
			this->button1->TabIndex = 11;
			this->button1->Text = L"打开";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &串口控制模块::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(8, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 10;
			this->label1->Text = L"串口号";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(95, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 9;
			// 
			// logBox1
			// 
			this->logBox1->Location = System::Drawing::Point(696, 23);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(542, 407);
			this->logBox1->TabIndex = 1;
			// 
			// 串口控制模块
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1250, 468);
			this->Controls->Add(this->logBox1);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Name = L"串口控制模块";
			this->Text = L"串口控制模块";
			this->Load += gcnew System::EventHandler(this, &串口控制模块::串口控制模块_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		configXml.SerialControlSource = T_to_string(comboBox1->Text);
		if (global::scs->SerialHandleInit()) {
			logBox1->LogInfo("控制电源模块打开成功");
		}
		else {
			logBox1->LogErr("控制电源模块打开失败");
		}
	}
private: System::Void 串口控制模块_Load(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 1; i < 100; i++) {
		comboBox1->Items->Add("COM" + i.ToString());
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	configXml.SerialControlSource = T_to_string(comboBox1->Text);
	global::scs->SerialHandleClose();
	logBox1->LogInfo("控制电源模块关闭");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	try {
		if (global::scs->SetDirectVoltage(Convert::ToInt32(comboBox2->Text) * 100)) {
			logBox1->LogInfo("设置直流电压成功");
		}
		else {
			logBox1->LogErr("设置直流电压失败");
		}
	}
	catch (System::Exception^e) {
		logBox1->LogErr("请输入数字");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (global::scs->SetAlternatingVoltage('A',Convert::ToInt32(comboBox3->Text))) {
			logBox1->LogInfo("设置交流电压成功");
		}
		else {
			logBox1->LogErr("设置交流电压失败");
		}
	}
	catch (System::Exception^e) {
		logBox1->LogErr("请输入数字");
	}
}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

		try {
			Convert::ToInt32(textBox1->Text);
		}
		catch (System::Exception^e) {
			logBox1->LogErr("请输入9位数字");
			return;
		}
		if (global::scs->SetFrequency( Convert::ToInt32(textBox1->Text))) {
			logBox1->LogInfo("频率修改成功");
		}
		else {
			logBox1->LogErr("频率修改失败");
		}
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->SelectedIndex == -1) {
		logBox1->LogErr("请选择波形");
		return;
	}
	if (global::scs->SetWaveForm(comboBox4->SelectedIndex)) {
		cout << comboBox4->SelectedIndex << endl;
		logBox1->LogInfo("波形修改成功");
	}
	else {
		logBox1->LogErr("波形修改失败");
	}
}
};
}
