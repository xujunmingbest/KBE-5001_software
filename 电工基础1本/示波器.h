#pragma once
#include "tool.h"

namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 示波器 摘要
	/// </summary>
	public ref class 示波器 : public System::Windows::Forms::Form
	{
	public:
		示波器(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~示波器()
		{
			if (t != nullptr) t->Abort();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Button^  button2;

private: System::Windows::Forms::ComboBox^  comboBox1;


private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::Button^  button12;

private: System::Windows::Forms::Button^  button9;

private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::ComboBox^  comboBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(示波器::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1015, 510);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"示波器控制";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(11, 201);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(114, 67);
			this->button7->TabIndex = 11;
			this->button7->Text = L"打开示波器usb连接";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &示波器::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(11, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 67);
			this->button6->TabIndex = 10;
			this->button6->Text = L"关闭示波器usb连接";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &示波器::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(170, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &示波器::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 55);
			this->button3->TabIndex = 6;
			this->button3->Text = L"打开示波器软件";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &示波器::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(11, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 67);
			this->button4->TabIndex = 7;
			this->button4->Text = L"保存屏幕截图";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &示波器::button4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Black;
			this->groupBox2->Controls->Add(this->textBox31);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->textBox32);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->textBox33);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->textBox34);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->textBox35);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->textBox26);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->textBox27);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->textBox28);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->textBox29);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->textBox30);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->textBox21);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->textBox22);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->textBox23);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->textBox24);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->textBox25);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBox17);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->textBox18);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->textBox19);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox20);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 528);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1633, 447);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"示波器参数获取";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &示波器::groupBox2_Enter);
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(1259, 341);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(180, 30);
			this->textBox31->TabIndex = 70;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label31->Location = System::Drawing::Point(1181, 343);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(72, 25);
			this->label31->TabIndex = 69;
			this->label31->Text = L"突发脉冲";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(979, 341);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(180, 30);
			this->textBox32->TabIndex = 68;
			// 
			// label32
			// 
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label32->Location = System::Drawing::Point(901, 343);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(72, 25);
			this->label32->TabIndex = 67;
			this->label32->Text = L"MP_LFF";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(696, 341);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(180, 30);
			this->textBox33->TabIndex = 66;
			// 
			// label33
			// 
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label33->Location = System::Drawing::Point(618, 343);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(72, 25);
			this->label33->TabIndex = 65;
			this->label33->Text = L"MP_LFR";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(416, 341);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(180, 30);
			this->textBox34->TabIndex = 64;
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label34->Location = System::Drawing::Point(338, 343);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(72, 25);
			this->label34->TabIndex = 63;
			this->label34->Text = L"MP_LRR";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(109, 341);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(180, 30);
			this->textBox35->TabIndex = 62;
			// 
			// label35
			// 
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label35->Location = System::Drawing::Point(31, 343);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(72, 25);
			this->label35->TabIndex = 61;
			this->label35->Text = L"MP_LRF";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(1259, 291);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(180, 30);
			this->textBox26->TabIndex = 60;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label26->Location = System::Drawing::Point(1181, 293);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(72, 25);
			this->label26->TabIndex = 59;
			this->label26->Text = L"MP_FFF";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(979, 291);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(180, 30);
			this->textBox27->TabIndex = 58;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label27->Location = System::Drawing::Point(901, 293);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(72, 25);
			this->label27->TabIndex = 57;
			this->label27->Text = L"MP_FFR";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(696, 291);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(180, 30);
			this->textBox28->TabIndex = 56;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label28->Location = System::Drawing::Point(618, 293);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(72, 25);
			this->label28->TabIndex = 55;
			this->label28->Text = L"MP_FRF";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(416, 291);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(180, 30);
			this->textBox29->TabIndex = 54;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label29->Location = System::Drawing::Point(338, 293);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(72, 25);
			this->label29->TabIndex = 53;
			this->label29->Text = L"MP_FRR";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(109, 291);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(180, 30);
			this->textBox30->TabIndex = 52;
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label30->Location = System::Drawing::Point(31, 293);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(72, 25);
			this->label30->TabIndex = 51;
			this->label30->Text = L"相位";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(1259, 244);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(180, 30);
			this->textBox21->TabIndex = 50;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label21->Location = System::Drawing::Point(1181, 234);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(72, 47);
			this->label21->TabIndex = 49;
			this->label21->Text = L"下升延时";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(979, 244);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(180, 30);
			this->textBox22->TabIndex = 48;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label22->Location = System::Drawing::Point(901, 237);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(72, 47);
			this->label22->TabIndex = 47;
			this->label22->Text = L"上升延时";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(696, 244);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(180, 30);
			this->textBox23->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label23->Location = System::Drawing::Point(618, 246);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(72, 25);
			this->label23->TabIndex = 45;
			this->label23->Text = L"负占空比\t";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(416, 244);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(180, 30);
			this->textBox24->TabIndex = 44;
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label24->Location = System::Drawing::Point(310, 247);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 27);
			this->label24->TabIndex = 43;
			this->label24->Text = L"正占空比";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(109, 244);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(180, 30);
			this->textBox25->TabIndex = 42;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label25->Location = System::Drawing::Point(31, 246);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(72, 28);
			this->label25->TabIndex = 41;
			this->label25->Text = L"负脉宽";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(1259, 195);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(180, 30);
			this->textBox16->TabIndex = 40;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label16->Location = System::Drawing::Point(1181, 197);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(72, 25);
			this->label16->TabIndex = 39;
			this->label16->Text = L"正脉宽";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(979, 195);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(180, 30);
			this->textBox17->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label17->Location = System::Drawing::Point(901, 184);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(72, 49);
			this->label17->TabIndex = 37;
			this->label17->Text = L"下降时间";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(696, 195);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(180, 30);
			this->textBox18->TabIndex = 36;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label18->Location = System::Drawing::Point(618, 182);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(72, 52);
			this->label18->TabIndex = 35;
			this->label18->Text = L"上升时间\t";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(416, 195);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(180, 30);
			this->textBox19->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label19->Location = System::Drawing::Point(338, 197);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(72, 25);
			this->label19->TabIndex = 33;
			this->label19->Text = L"频率";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(109, 195);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(180, 30);
			this->textBox20->TabIndex = 32;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label20->Location = System::Drawing::Point(31, 197);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 28);
			this->label20->TabIndex = 31;
			this->label20->Text = L"周期";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(1259, 143);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 30);
			this->textBox11->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label11->Location = System::Drawing::Point(1181, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 25);
			this->label11->TabIndex = 29;
			this->label11->Text = L"预冲";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(979, 143);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(180, 30);
			this->textBox12->TabIndex = 28;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label12->Location = System::Drawing::Point(901, 145);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 28);
			this->label12->TabIndex = 27;
			this->label12->Text = L"过冲";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(696, 143);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(180, 30);
			this->textBox13->TabIndex = 26;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label13->Location = System::Drawing::Point(618, 145);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"周期面积";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(416, 143);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(180, 30);
			this->textBox14->TabIndex = 24;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label14->Location = System::Drawing::Point(338, 145);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 25);
			this->label14->TabIndex = 23;
			this->label14->Text = L"面积";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(109, 145);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(180, 30);
			this->textBox15->TabIndex = 22;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &示波器::textBox15_TextChanged);
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label15->Location = System::Drawing::Point(31, 137);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(72, 52);
			this->label15->TabIndex = 21;
			this->label15->Text = L"周期均方值";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1259, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 30);
			this->textBox6->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Location = System::Drawing::Point(1181, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"均方根";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(979, 93);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 30);
			this->textBox7->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Location = System::Drawing::Point(898, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 54);
			this->label7->TabIndex = 17;
			this->label7->Text = L"MP_CYCMEAN";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(696, 89);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(180, 30);
			this->textBox8->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Location = System::Drawing::Point(618, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"平均值";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(416, 89);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(180, 30);
			this->textBox9->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Location = System::Drawing::Point(338, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 43);
			this->label9->TabIndex = 13;
			this->label9->Text = L"幅度最小值";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(109, 89);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(180, 30);
			this->textBox10->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label10->Location = System::Drawing::Point(31, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 48);
			this->label10->TabIndex = 11;
			this->label10->Text = L"VPP-峰峰值";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1259, 41);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 30);
			this->textBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(1181, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"低电平";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(979, 41);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 30);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(901, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"中间值";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(696, 41);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 30);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(618, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"高电平";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(416, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 30);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(338, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"最小值";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 30);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(31, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"最大值";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1455, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 32);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &示波器::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox3->Controls->Add(this->comboBox7);
			this->groupBox3->Controls->Add(this->comboBox4);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->textBox37);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->textBox36);
			this->groupBox3->Controls->Add(this->comboBox5);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->comboBox6);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(1047, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(576, 495);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"示波器参数设置";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CH1", L"CH2" });
			this->comboBox7->Location = System::Drawing::Point(248, 262);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 28);
			this->comboBox7->TabIndex = 19;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CH1", L"CH2" });
			this->comboBox4->Location = System::Drawing::Point(248, 206);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 18;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CH1", L"CH2" });
			this->comboBox3->Location = System::Drawing::Point(248, 151);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CH1", L"CH2" });
			this->comboBox2->Location = System::Drawing::Point(248, 91);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 16;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(121, 151);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(121, 30);
			this->textBox37->TabIndex = 15;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(375, 154);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(200, 20);
			this->label37->TabIndex = 14;
			this->label37->Text = L"中间值350,支持小数";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(375, 94);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(200, 20);
			this->label36->TabIndex = 13;
			this->label36->Text = L"中间值128,支持小数";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(121, 91);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(121, 30);
			this->textBox36->TabIndex = 12;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &示波器::textBox36_TextChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"1mV", L"2mV", L"5mV", L"10mV", L"20mV", L"50mV",
					L"100mV", L"200mV", L"500mV", L"1V", L"2V", L"5V", L"10V", L"20V"
			});
			this->comboBox5->Location = System::Drawing::Point(121, 261);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 28);
			this->comboBox5->TabIndex = 9;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(17, 256);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(89, 39);
			this->button11->TabIndex = 8;
			this->button11->Text = L"VB";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &示波器::button11_Click);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"2ns", L"5ns", L"10ns", L"20ns", L"50ns", L"100ns",
					L"200ns", L"500ns", L"1us", L"2us", L"5us", L"10us", L"20us", L"50us", L"100us", L"200us", L"500us", L"1ms", L"2ms", L"5ms",
					L"10ms", L"20ms", L"50ms", L"100ms", L"200ms", L"500ms", L"1s", L"2s", L"5s", L"10s", L"20s", L"50s"
			});
			this->comboBox6->Location = System::Drawing::Point(121, 206);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 28);
			this->comboBox6->TabIndex = 7;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(17, 201);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(89, 39);
			this->button12->TabIndex = 6;
			this->button12->Text = L"TB";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &示波器::button12_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(17, 142);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 39);
			this->button9->TabIndex = 4;
			this->button9->Text = L"HP";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &示波器::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(17, 85);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(89, 39);
			this->button8->TabIndex = 2;
			this->button8->Text = L"VP";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &示波器::button8_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CH1", L"CH2" });
			this->comboBox1->Location = System::Drawing::Point(121, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 39);
			this->button2->TabIndex = 0;
			this->button2->Text = L"SEL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &示波器::button2_Click);
			// 
			// 示波器
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1657, 987);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"示波器";
			this->Text = L"示波器";
			this->Load += gcnew System::EventHandler(this, &示波器::示波器_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 示波器_Load(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int a = ::WinExec("cmd /k \"C:\\Users\\Administrator.SKY-20180103XGL\\Desktop\\仪器管家.lnk\"", SW_HIDE);
	if (a <31) MessageBox::Show("仪器管家调用失败");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^FileName = gcnew String(Grades[3].c_str()) + "-" + global::userName + ".bmp";
	if (oscillograph::GetOscilloscopePrtScnBmp(T_to_string(FileName))) {
		pictureBox1->ImageLocation = "bmp/" + FileName;
	}
	else {
		MessageBox::Show("截图失败");
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	oscillograph::oscillographOpen();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	oscillograph::oscillographClose();
}
		 Thread ^t;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (t == nullptr) {
		t = gcnew Thread(gcnew ThreadStart(this, &示波器::Show));
		t->Start();
	}
}
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//void Show()
}

		 void Show() {
			 while (1) {
				 Thread::Sleep(500);
				 oscillographParam t = oscillograph::GetoscillographParam();
				 textBox1->Text = gcnew String(t.MP_MAX.c_str());
				 textBox2->Text = gcnew String(t.MP_MIN.c_str());
				 textBox3->Text = gcnew String(t.MP_HIGH.c_str());
				 textBox4->Text = gcnew String(t.MP_MIDDLE.c_str());
				 textBox5->Text = gcnew String(t.MP_LOW.c_str());

				 textBox10->Text = gcnew String(t.MP_PKPK.c_str());
				 textBox9->Text = gcnew String(t.MP_AMP.c_str());
				 textBox8->Text = gcnew String(t.MP_MEAN.c_str());
				 textBox7->Text = gcnew String(t.MP_CYCMEAN.c_str());
				 textBox6->Text = gcnew String(t.MP_RMS.c_str());


				 textBox15->Text = gcnew String(t.MP_CYCRMS.c_str());
				 textBox14->Text = gcnew String(t.MP_AREA.c_str());
				 textBox13->Text = gcnew String(t.MP_CYCAREA.c_str());
				 textBox12->Text = gcnew String(t.MP_OVERSHOOT.c_str());
				 textBox11->Text = gcnew String(t.MP_PRESHOOT.c_str());

				 textBox20->Text = gcnew String(t.MP_PERIOD.c_str());
				 textBox19->Text = gcnew String(t.MP_FREQ.c_str());
				 textBox18->Text = gcnew String(t.MP_RISE_TIME.c_str());
				 textBox17->Text = gcnew String(t.MP_FALL_TIME.c_str());
				 textBox16->Text = gcnew String(t.MP_PWIDTH.c_str());


				 textBox25->Text = gcnew String(t.MP_NWIDTH.c_str());
				 textBox24->Text = gcnew String(t.MP_PDUTY.c_str());
				 textBox23->Text = gcnew String(t.MP_NDUTY.c_str());
				 textBox22->Text = gcnew String(t.MP_RISEDELAY.c_str());
				 textBox21->Text = gcnew String(t.MP_FALLDELAY.c_str());


				 textBox30->Text = gcnew String(t.MP_PHASE.c_str());
				 textBox29->Text = gcnew String(t.MP_FRR.c_str());
				 textBox28->Text = gcnew String(t.MP_FRF.c_str());
				 textBox27->Text = gcnew String(t.MP_FFR.c_str());
				 textBox26->Text = gcnew String(t.MP_FFF.c_str());


				 textBox35->Text = gcnew String(t.MP_LRF.c_str());
				 textBox34->Text = gcnew String(t.MP_LRR.c_str());
				 textBox33->Text = gcnew String(t.MP_LFR.c_str());
				 textBox32->Text = gcnew String(t.MP_LFF.c_str());
				 textBox31->Text = gcnew String(t.MP_BURST_WIDTH.c_str());
			 }
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	bool s = false; 
	switch (comboBox1->SelectedIndex) {
	case 0: s = oscillograph::SetParam(string("CH:0@SEL;")); break;
	case 1: s = oscillograph::SetParam(string("CH:1@SEL;")); break;
	default:
		MessageBox::Show("请选择通道");
		return;
	}
	if (s) MessageBox::Show("设置成功");
	else MessageBox::Show("设置失败");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (String::IsNullOrEmpty(textBox36->Text->Trim())) {
		MessageBox::Show("不能为空");
		return;
	}
	string value = T_to_string(textBox36->Text);
	string ch;
	switch (comboBox2->SelectedIndex) {
	case 0: ch = "0"; break;
	case 1: ch = "1"; break;
	default:
		MessageBox::Show("请选择通道");
		return;
	}
	oscillograph::SetVP(ch, value);
}
private: System::Void textBox36_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (String::IsNullOrEmpty(textBox37->Text->Trim())) {
		MessageBox::Show("不能为空");
		return;
	}
	string value = T_to_string(textBox37->Text);
	string ch;
	switch (comboBox3->SelectedIndex) {
	case 0: ch = "0"; break;
	case 1: ch = "1"; break;
	default:
		MessageBox::Show("请选择通道");
		return;
	}
	oscillograph::SetHP(ch, value);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	string ch;
	switch (comboBox4->SelectedIndex) {
	case 0: ch = "0"; break;
	case 1: ch = "1"; break;
	default:
		MessageBox::Show("请选择通道");
		return;
	}
	if (comboBox6->SelectedItem == nullptr) {
		MessageBox::Show("请选择时间间隔");
		return;
	}
	string value = T_to_string(comboBox6->Text);
	oscillograph::SetTB(ch, value);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	string ch;
	switch (comboBox7->SelectedIndex) {
	case 0: ch = "0"; break;
	case 1: ch = "1"; break;
	default:
		MessageBox::Show("请选择通道");
		return;
	}
	if (comboBox5->SelectedItem == nullptr) {
		MessageBox::Show("请选择时间间隔");
		return;
	}
	string value = T_to_string(comboBox5->Text);
	oscillograph::SetVB(ch, value);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
