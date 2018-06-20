#pragma once
#include "tool.h"
#include "SynchroShortConnection.h"
extern bool 基尔霍夫定律实验内容IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律实验内容 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验内容 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验内容(void)
		{
			InitializeComponent();
			基尔霍夫定律实验内容IsOpened = true;
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
		~基尔霍夫定律实验内容()
		{
			基尔霍夫定律实验内容IsOpened = false;
			v->Close();
			t->Abort();
			delete spr;
			if (components)
			{
				delete components;
			}
		}
		Voice^v = gcnew Voice;
		Thread ^ t;
		S_PLCRecv *spr = new S_PLCRecv;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button2;

private: System::Windows::Forms::Panel^  panel2;

private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label15;

private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::Button^  button11;

private: System::Windows::Forms::Button^  button12;

private: System::Windows::Forms::Button^  button7;

private: System::Windows::Forms::Button^  button8;

private: System::Windows::Forms::Button^  button9;

private: System::Windows::Forms::Button^  button10;

private: System::Windows::Forms::Button^  button5;

private: System::Windows::Forms::Button^  button6;

private: System::Windows::Forms::Button^  button4;

private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::ComboBox^  comboBox1;










private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;




private: System::Windows::Forms::ComboBox^  comboBox7;


private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::ComboBox^  comboBox5;







private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label34;






private: System::Windows::Forms::Button^  button16;






























private: ::LedWatch::LedWatch^  ledWatch4;
private: ::LedWatch::LedWatch^  ledWatch3;
private: ::LedWatch::LedWatch^  ledWatch2;
private: ::LedWatch::LedWatch^  ledWatch1;





	private: System::ComponentModel::IContainer^  components;















	protected:





	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律实验内容::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ledWatch4 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch3 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch2 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch1 = (gcnew ::LedWatch::LedWatch());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"楷体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(0, 359);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1230, 320);
			this->panel1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(1004, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 32;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(3, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(1096, 23);
			this->label19->TabIndex = 7;
			this->label19->Text = L"5．用万用表分别测量两路电源及电阻元件上的电压值，并记录。";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(3, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1112, 51);
			this->label5->TabIndex = 5;
			this->label5->Text = L"4．将电流插头分别插入三条支路的三个电流插座中，读出并记录电流值。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(3, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1144, 52);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3．熟悉电流插头的结构，将电流插头的两端接至万用表的“＋、－”两端。";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"实验内容";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(1109, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button1_Click_1);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(3, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1144, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．实验前先任意设定三条支路的电流参考方向，如图中的I1、I2、I3所示，并熟悉线路结构，掌握各开关的操作使用方法。";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1144, 48);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2．将开关向上拔，即电阻接入电路中。分别将两路直流稳压源接入电路，令E1＝12V，E2＝6V。";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ledWatch4);
			this->panel2->Controls->Add(this->ledWatch3);
			this->panel2->Controls->Add(this->ledWatch2);
			this->panel2->Controls->Add(this->ledWatch1);
			this->panel2->Location = System::Drawing::Point(1, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1229, 355);
			this->panel2->TabIndex = 33;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &基尔霍夫定律实验内容::panel2_Paint);
			// 
			// ledWatch4
			// 
			this->ledWatch4->Location = System::Drawing::Point(543, 189);
			this->ledWatch4->Name = L"ledWatch4";
			this->ledWatch4->Size = System::Drawing::Size(413, 139);
			this->ledWatch4->TabIndex = 3;
			// 
			// ledWatch3
			// 
			this->ledWatch3->Location = System::Drawing::Point(29, 189);
			this->ledWatch3->Name = L"ledWatch3";
			this->ledWatch3->Size = System::Drawing::Size(413, 139);
			this->ledWatch3->TabIndex = 2;
			// 
			// ledWatch2
			// 
			this->ledWatch2->Location = System::Drawing::Point(541, 11);
			this->ledWatch2->Name = L"ledWatch2";
			this->ledWatch2->Size = System::Drawing::Size(413, 139);
			this->ledWatch2->TabIndex = 1;
			// 
			// ledWatch1
			// 
			this->ledWatch1->Location = System::Drawing::Point(29, 11);
			this->ledWatch1->Name = L"ledWatch1";
			this->ledWatch1->Size = System::Drawing::Size(413, 139);
			this->ledWatch1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->comboBox10);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->comboBox9);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox7);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label38);
			this->groupBox1->Controls->Add(this->label35);
			this->groupBox1->Controls->Add(this->label36);
			this->groupBox1->Controls->Add(this->label37);
			this->groupBox1->Controls->Add(this->label32);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label33);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->textBox19);
			this->groupBox1->Controls->Add(this->textBox23);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->textBox24);
			this->groupBox1->Controls->Add(this->textBox18);
			this->groupBox1->Controls->Add(this->textBox25);
			this->groupBox1->Controls->Add(this->textBox29);
			this->groupBox1->Controls->Add(this->textBox26);
			this->groupBox1->Controls->Add(this->textBox28);
			this->groupBox1->Controls->Add(this->textBox27);
			this->groupBox1->Controls->Add(this->textBox30);
			this->groupBox1->Controls->Add(this->textBox31);
			this->groupBox1->Controls->Add(this->textBox32);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox20);
			this->groupBox1->Controls->Add(this->textBox21);
			this->groupBox1->Controls->Add(this->textBox22);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(-1, 688);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1231, 280);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验数据";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::groupBox1_Enter);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(1100, 246);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(72, 30);
			this->button16->TabIndex = 88;
			this->button16->Text = L"上传";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button16_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(223, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 30);
			this->textBox5->TabIndex = 85;
			this->textBox5->Text = L"0.00";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::textBox5_TextChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox10->Location = System::Drawing::Point(1074, 106);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(100, 28);
			this->comboBox10->TabIndex = 83;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox6->Location = System::Drawing::Point(967, 106);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(100, 28);
			this->comboBox6->TabIndex = 82;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(116, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 30);
			this->textBox3->TabIndex = 84;
			this->textBox3->Text = L"0.00";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox9->Location = System::Drawing::Point(854, 106);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(100, 28);
			this->comboBox9->TabIndex = 81;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox5->Location = System::Drawing::Point(749, 106);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(100, 28);
			this->comboBox5->TabIndex = 80;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox7->Location = System::Drawing::Point(642, 106);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(100, 28);
			this->comboBox7->TabIndex = 79;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox4->Location = System::Drawing::Point(537, 104);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 28);
			this->comboBox4->TabIndex = 76;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox2->Location = System::Drawing::Point(431, 104);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 28);
			this->comboBox2->TabIndex = 75;
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(1072, 67);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(100, 28);
			this->label38->TabIndex = 74;
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(966, 66);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(100, 28);
			this->label35->TabIndex = 73;
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(855, 66);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(100, 28);
			this->label36->TabIndex = 72;
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(748, 66);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(100, 28);
			this->label37->TabIndex = 71;
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(645, 66);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(100, 28);
			this->label32->TabIndex = 70;
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(124, 31);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 20);
			this->label15->TabIndex = 3;
			this->label15->Text = L"E1（v）";
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(535, 66);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(100, 28);
			this->label31->TabIndex = 67;
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(224, 31);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(84, 20);
			this->label17->TabIndex = 4;
			this->label17->Text = L"E2（v）";
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(431, 66);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(100, 28);
			this->label30->TabIndex = 66;
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(115, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 34);
			this->button5->TabIndex = 30;
			this->button5->Text = L"设置";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button5_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(222, 140);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 34);
			this->button10->TabIndex = 32;
			this->button10->Text = L"设置";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button10_Click);
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(328, 66);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(100, 28);
			this->label29->TabIndex = 65;
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(223, 66);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 28);
			this->label33->TabIndex = 69;
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 226);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(93, 20);
			this->label28->TabIndex = 64;
			this->label28->Text = L"相对误差";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(116, 181);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 30);
			this->textBox19->TabIndex = 46;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(1072, 216);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 30);
			this->textBox23->TabIndex = 63;
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(116, 66);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(100, 28);
			this->label34->TabIndex = 68;
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(966, 216);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 30);
			this->textBox24->TabIndex = 62;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(222, 181);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 30);
			this->textBox18->TabIndex = 47;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(856, 216);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 30);
			this->textBox25->TabIndex = 61;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(116, 216);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 30);
			this->textBox29->TabIndex = 57;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(750, 216);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 30);
			this->textBox26->TabIndex = 60;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(222, 216);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 30);
			this->textBox28->TabIndex = 58;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(644, 216);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 30);
			this->textBox27->TabIndex = 59;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(540, 216);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 30);
			this->textBox30->TabIndex = 56;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(434, 216);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 30);
			this->textBox31->TabIndex = 55;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(328, 216);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 30);
			this->textBox32->TabIndex = 54;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 32);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(72, 20);
			this->label27->TabIndex = 53;
			this->label27->Text = L"被测量";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1072, 181);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 30);
			this->textBox4->TabIndex = 52;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(966, 181);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 30);
			this->textBox14->TabIndex = 51;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(856, 181);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 30);
			this->textBox15->TabIndex = 50;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(750, 181);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 30);
			this->textBox16->TabIndex = 49;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(644, 181);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 30);
			this->textBox17->TabIndex = 48;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(540, 181);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 30);
			this->textBox20->TabIndex = 45;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(434, 181);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 30);
			this->textBox21->TabIndex = 44;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(328, 181);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 30);
			this->textBox22->TabIndex = 43;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1074, 140);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 34);
			this->button11->TabIndex = 42;
			this->button11->Text = L"获取";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(968, 140);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 34);
			this->button12->TabIndex = 40;
			this->button12->Text = L"获取";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button12_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(855, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 34);
			this->button7->TabIndex = 38;
			this->button7->Text = L"获取";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(749, 140);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 34);
			this->button8->TabIndex = 36;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(644, 140);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 34);
			this->button9->TabIndex = 34;
			this->button9->Text = L"获取";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button9_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(539, 141);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 34);
			this->button6->TabIndex = 28;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button6_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(434, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 34);
			this->button4->TabIndex = 26;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(328, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 34);
			this->button3->TabIndex = 24;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button3_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox1->Location = System::Drawing::Point(328, 104);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 28);
			this->comboBox1->TabIndex = 23;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 71);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(72, 20);
			this->label26->TabIndex = 11;
			this->label26->Text = L"测量值";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 181);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(72, 20);
			this->label25->TabIndex = 10;
			this->label25->Text = L"计算值";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(1077, 32);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 20);
			this->label24->TabIndex = 9;
			this->label24->Text = L"UDE（v）";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(976, 32);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(95, 20);
			this->label23->TabIndex = 8;
			this->label23->Text = L"UCD（v）";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(861, 32);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 20);
			this->label22->TabIndex = 7;
			this->label22->Text = L"UAD（v）";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(754, 32);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 20);
			this->label21->TabIndex = 6;
			this->label21->Text = L"UAB（v）";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(650, 32);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(95, 20);
			this->label20->TabIndex = 5;
			this->label20->Text = L"UFA（v）";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(541, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 20);
			this->label13->TabIndex = 2;
			this->label13->Text = L"I3（mA）";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(436, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"I2（mA）";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(324, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"I1（mA）";
			// 
			// 基尔霍夫定律实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1655, 976);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"基尔霍夫定律实验内容";
			this->Text = L"基尔霍夫定律实验内容";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::基尔霍夫定律实验内容_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		comboBox4->SelectedIndex = 0;
		comboBox5->SelectedIndex = 0;
		comboBox6->SelectedIndex = 0;
		comboBox7->SelectedIndex = 0;
		comboBox9->SelectedIndex = 0;
		comboBox10->SelectedIndex = 0;

	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
			
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}

private: System::Void dataGridView1_ColumnHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	v->Speak(label1->Text + label2->Text + label3->Text
		+ label4->Text + label5->Text + label19->Text);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	v->Close();
}

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


}

private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	label29->Text = DcNumToString(spr->I, spr->DCsymbol);
}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	string o = IsDClegal(textBox3->Text);
	if (o == "") {
		MessageBox::Show("输入不合法");
		return;
	}
	global::scs->SetDirectVoltage(GetDcNum(o));

	label34->Text = textBox3->Text ;
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	label33->Text = textBox5->Text;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	label30->Text = DcNumToString(spr->I, spr->DCsymbol);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	label31->Text = DcNumToString(spr->I, spr->DCsymbol);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	label32->Text = DcNumToString(spr->U, spr->DCsymbol);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

	label37->Text = DcNumToString(spr->U, spr->DCsymbol);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	label36->Text = DcNumToString(spr->U, spr->DCsymbol);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	label35->Text = DcNumToString(spr->U, spr->DCsymbol);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	label38->Text = DcNumToString(spr->U, spr->DCsymbol);
}


		 void Recv() {
			 spr = new S_PLCRecv;
			 memset(spr, 0x00, sizeof(S_PLCRecv));
			 while (1) {
				 Thread::Sleep(1000);
				 global::sh->GetliKongData(spr);
				 if (spr->HeaderId == 6) {
				     //textBox1->Text = DcNumToString(spr->U, spr->DCsymbol) + " V";
				 }
				 else if (spr->HeaderId == 5) {
					 //textBox2->Text = DcNumToString(spr->I, spr->DCsymbol) + " mA";
				 }
			 }
		 }

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!Check()) return;
	button16->Enabled = false;
	t = gcnew Thread(gcnew ThreadStart(this, &基尔霍夫定律实验内容::Send));
	t->Start();
}

		 bool Check() {

			 /*
			 if (T_to_string(textBox1->Text).length() >= 50) {
				 MessageBox::Show("姓名太长");
				 return false;
			 }*/
			 return true;
		 }

		 void Send() {
			 SSCHandle ssc;
			 if (!ssc.Connect(configXml.GradeIp, configXml.GradePort)) {
				 return ShowErrorMsg("请检查网络设置", ssc);
			 }
			 KirchhoffTheorem g; memset(&g, 0x00, sizeof(KirchhoffTheorem));



			 g.I1_c_v = 10;
			 g.I1_m_v = 100;
			 g.I1_r_e = 50;

			 g.I2_c_v = 10;
			 g.I3_c_v = 100;
			 g.U11_c_v = 50;

			 g.Uab_c_v = 10;
			 g.Ude_c_v = 100;
			 g.Ufa_c_v = 900;

			 string text ;
			 memcpy(g.StuName, text.c_str(), 50);
			 g.StuName[text.length()] = 0x00;
			 g.XueHao = String_to_Int(textBox3->Text);
			 string t = Mylog::_GetNowTime();
			 memcpy(g.DateTime, Mylog::_GetNowTime().c_str(), t.length());
			 Head H; memset(&H, 0x00, sizeof(H));
			 memcpy(H.DateTime, Mylog::_GetNowTime().c_str(), t.length());
			 H.TrialCode = 2;
			 memcpy(H.TrialName, "基尔霍夫定理", sizeof("基尔霍夫定理"));


			 if (!ssc.SendGrade(string((char*)&g, sizeof(g)), H)) {
				 return ShowErrorMsg("网络问题", ssc);;
			 }
			 string retmsg;
			 if (!ssc.RecvRet(retmsg)) {
				 return ShowErrorMsg("网络问题", ssc);;
			 }
			 ShowErrorMsg(gcnew String(retmsg.c_str()), ssc);
		 }

		 void ShowErrorMsg(String^msg, SSCHandle &ssc) {
			 MessageBox::Show(msg);
			 button16->Enabled = true;
			 ssc.Destroy();
		 }


		 private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
};