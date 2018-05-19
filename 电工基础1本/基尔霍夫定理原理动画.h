#pragma once
#include "tool.h"
extern bool 基尔霍夫定理原理动画IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定理原理动画 摘要
	/// </summary>
	public ref class 基尔霍夫定理原理动画 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定理原理动画(void)
		{
			InitializeComponent();

			基尔霍夫定理原理动画IsOpened = true;

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
		~基尔霍夫定理原理动画()
		{
			基尔霍夫定理原理动画IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label55;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label60;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定理原理动画::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(179, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 10);
			this->label1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(585, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 227);
			this->label2->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Maroon;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(573, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 55);
			this->label3->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(585, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 360);
			this->label4->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(494, 701);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 10);
			this->label5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Maroon;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(432, 689);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 35);
			this->label6->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(184, 701);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(249, 10);
			this->label7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(458, 317);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 22);
			this->label8->TabIndex = 17;
			this->label8->Text = L"电阻:1KΩ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(402, 661);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 22);
			this->label9->TabIndex = 18;
			this->label9->Text = L"电阻:510Ω";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(594, 701);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(216, 10);
			this->label10->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(779, 661);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 22);
			this->label11->TabIndex = 21;
			this->label11->Text = L"电阻:750Ω";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Maroon;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Location = System::Drawing::Point(803, 689);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 35);
			this->label12->TabIndex = 20;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(969, 510);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 201);
			this->label13->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(861, 701);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(112, 10);
			this->label14->TabIndex = 23;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1041, 326);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(77, 108);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(970, 500);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(106, 10);
			this->label15->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(875, 500);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(103, 10);
			this->label16->TabIndex = 26;
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(1066, 432);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(10, 68);
			this->label17->TabIndex = 27;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(1066, 258);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(10, 68);
			this->label18->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(967, 258);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(104, 10);
			this->label19->TabIndex = 29;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(875, 258);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(10, 242);
			this->label20->TabIndex = 30;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(876, 258);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(103, 10);
			this->label21->TabIndex = 31;
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(834, 156);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(123, 22);
			this->label22->TabIndex = 34;
			this->label22->Text = L"电阻:750Ω";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Maroon;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label23->Location = System::Drawing::Point(959, 131);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(34, 55);
			this->label23->TabIndex = 33;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(969, 75);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(10, 56);
			this->label24->TabIndex = 32;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(969, 185);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(10, 73);
			this->label25->TabIndex = 35;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(588, 73);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(391, 10);
			this->label26->TabIndex = 36;
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(179, 83);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(10, 56);
			this->label27->TabIndex = 37;
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(269, 392);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(10, 242);
			this->label28->TabIndex = 41;
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Black;
			this->label29->Location = System::Drawing::Point(81, 392);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(10, 68);
			this->label29->TabIndex = 40;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(81, 566);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(10, 68);
			this->label30->TabIndex = 39;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(56, 460);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(77, 108);
			this->pictureBox3->TabIndex = 38;
			this->pictureBox3->TabStop = false;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(179, 638);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(10, 73);
			this->label31->TabIndex = 42;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(81, 629);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(103, 10);
			this->label32->TabIndex = 43;
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(176, 629);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(103, 10);
			this->label33->TabIndex = 44;
			this->label33->Visible = false;
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(176, 392);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(103, 10);
			this->label34->TabIndex = 46;
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(81, 392);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(103, 10);
			this->label35->TabIndex = 45;
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(174, 322);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(10, 73);
			this->label36->TabIndex = 47;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(181, 312);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(103, 10);
			this->label37->TabIndex = 49;
			this->label37->Visible = false;
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(85, 312);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(99, 10);
			this->label38->TabIndex = 48;
			// 
			// label39
			// 
			this->label39->BackColor = System::Drawing::Color::Black;
			this->label39->Location = System::Drawing::Point(179, 139);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(103, 10);
			this->label39->TabIndex = 51;
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->BackColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(86, 139);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(103, 10);
			this->label40->TabIndex = 50;
			// 
			// label41
			// 
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label41->Location = System::Drawing::Point(109, 204);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(113, 22);
			this->label41->TabIndex = 55;
			this->label41->Text = L"电阻:1KΩ";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label42
			// 
			this->label42->BackColor = System::Drawing::Color::Black;
			this->label42->Location = System::Drawing::Point(85, 237);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(10, 75);
			this->label42->TabIndex = 54;
			// 
			// label43
			// 
			this->label43->BackColor = System::Drawing::Color::Maroon;
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label43->Location = System::Drawing::Point(73, 185);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(34, 55);
			this->label43->TabIndex = 53;
			// 
			// label44
			// 
			this->label44->BackColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(85, 142);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(10, 44);
			this->label44->TabIndex = 52;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(244, 148);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(77, 108);
			this->pictureBox4->TabIndex = 56;
			this->pictureBox4->TabStop = false;
			// 
			// label45
			// 
			this->label45->BackColor = System::Drawing::Color::Black;
			this->label45->Location = System::Drawing::Point(274, 229);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(10, 93);
			this->label45->TabIndex = 57;
			// 
			// label46
			// 
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label46->Location = System::Drawing::Point(182, 253);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(86, 22);
			this->label46->TabIndex = 58;
			this->label46->Text = L"1N4007";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label47
			// 
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label47->Location = System::Drawing::Point(16, 500);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(39, 22);
			this->label47->TabIndex = 59;
			this->label47->Text = L"E1";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label48
			// 
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label48->Location = System::Drawing::Point(996, 360);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(39, 22);
			this->label48->TabIndex = 60;
			this->label48->Text = L"E2";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label49->Location = System::Drawing::Point(125, 694);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(29, 30);
			this->label49->TabIndex = 61;
			this->label49->Text = L"B";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label50->Location = System::Drawing::Point(578, 730);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(29, 30);
			this->label50->TabIndex = 62;
			this->label50->Text = L"A";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label51->Location = System::Drawing::Point(108, 338);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(29, 30);
			this->label51->TabIndex = 63;
			this->label51->Text = L"C";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label52->Location = System::Drawing::Point(578, 37);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(29, 30);
			this->label52->TabIndex = 64;
			this->label52->Text = L"D";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label53->Location = System::Drawing::Point(995, 216);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(29, 30);
			this->label53->TabIndex = 65;
			this->label53->Text = L"E";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"楷体", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label54->Location = System::Drawing::Point(995, 604);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(29, 30);
			this->label54->TabIndex = 66;
			this->label54->Text = L"F";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(406, 36);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(108, 34);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 67;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(646, 36);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(92, 34);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 68;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(523, 142);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(56, 111);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 69;
			this->pictureBox7->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 649);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 41);
			this->button1->TabIndex = 70;
			this->button1->Text = L"点击我展示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定理原理动画::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label62);
			this->groupBox1->Controls->Add(this->label61);
			this->groupBox1->Controls->Add(this->label60);
			this->groupBox1->Controls->Add(this->label59);
			this->groupBox1->Controls->Add(this->label57);
			this->groupBox1->Controls->Add(this->label58);
			this->groupBox1->Controls->Add(this->label56);
			this->groupBox1->Controls->Add(this->label55);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(1169, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(478, 708);
			this->groupBox1->TabIndex = 71;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"文字说明";
			// 
			// label62
			// 
			this->label62->Location = System::Drawing::Point(7, 490);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(320, 26);
			this->label62->TabIndex = 78;
			this->label62->Text = L"即E1+Ucd+Uda+Uab=0。";
			// 
			// label61
			// 
			this->label61->Location = System::Drawing::Point(7, 356);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(196, 26);
			this->label61->TabIndex = 77;
			this->label61->Text = L"即 I1+I2=I3。";
			// 
			// label60
			// 
			this->label60->Location = System::Drawing::Point(155, 180);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(84, 26);
			this->label60->TabIndex = 76;
			this->label60->Text = L"回路I。";
			// 
			// label59
			// 
			this->label59->Location = System::Drawing::Point(129, 106);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(149, 26);
			this->label59->TabIndex = 75;
			this->label59->Text = L"A点和D点。";
			// 
			// label57
			// 
			this->label57->Location = System::Drawing::Point(6, 408);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(465, 104);
			this->label57->TabIndex = 74;
			this->label57->Text = L"基尔霍夫电压定律:电路中任一回路，在任一时刻，沿该回路的所有支路电压的代数和等于零。";
			// 
			// label58
			// 
			this->label58->Location = System::Drawing::Point(6, 227);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(465, 116);
			this->label58->TabIndex = 73;
			this->label58->Text = L"基尔霍夫电流定律:对于电路中的任何一个节点而言，在任何一个时间，流进节点的电流等于流出节点的电流。也就是：节点电流之代数和恒等于0。";
			// 
			// label56
			// 
			this->label56->Location = System::Drawing::Point(7, 153);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(465, 53);
			this->label56->TabIndex = 72;
			this->label56->Text = L"回路:电路中任意一条闭合路径都是一个回路,例如";
			this->label56->Click += gcnew System::EventHandler(this, &基尔霍夫定理原理动画::label56_Click);
			// 
			// label55
			// 
			this->label55->Location = System::Drawing::Point(6, 82);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(465, 52);
			this->label55->TabIndex = 71;
			this->label55->Text = L"节点:电路中三条或三条以上支路的联接点,例如";
			this->label55->Click += gcnew System::EventHandler(this, &基尔霍夫定理原理动画::label55_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(300, 342);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(194, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 72;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &基尔霍夫定理原理动画::pictureBox1_Click);
			// 
			// 基尔霍夫定理原理动画
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1825, 802);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"基尔霍夫定理原理动画";
			this->Text = L"基尔霍夫定理原理动画";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定理原理动画::基尔霍夫定理原理动画_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 基尔霍夫定理原理动画_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 Voice ^v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


		if (t != nullptr) t->Abort();
		t = gcnew Thread(gcnew ThreadStart(this, &基尔霍夫定理原理动画::display));
		t->Start();
	}
			 Thread ^t;
			 void display(){
	v->Speak(label55->Text);
	Waver^ w = gcnew Waver;
	Thread::Sleep(label55->Text->Length / 3 * 1000);

	v->Speak(label59->Text);
	w->Init();
	w->Add(label52, label52->BackColor); w->Add(label59, label59->BackColor);
	w->Add(label50, label50->BackColor);
	w->waver();
	Thread::Sleep(label59->Text->Length / 3 * 1000);
	
	v->Speak(label56->Text);
	Sleep(label56->Text->Length / 3 * 1000);
	v->Speak(label60->Text);
	w->Init();
	w->Add(pictureBox1); w->Add(label60, label60->BackColor);
	w->waver();
	Thread::Sleep(label60->Text->Length / 3 * 1000);


	v->Speak(label58->Text);
	Sleep(label58->Text->Length / 3 * 1000);
	v->Speak(label61->Text);
	w->Init();
	w->Add(pictureBox5); w->Add(pictureBox6); w->Add(pictureBox7); w->Add(label61, label61->BackColor);
	w->waver();
	Thread::Sleep(label61->Text->Length / 3 * 1000);

	v->Speak(label57->Text);
	Sleep(label57->Text->Length / 3 * 1000);
	v->Speak(label62->Text);
	w->Init();
	w->Add(label43, label43->BackColor); w->Add(label3, label3->BackColor);
	w->Add(label6, label6->BackColor); w->Add(label62, label62->BackColor); w->Add(pictureBox3);
	w->waver();
	Thread::Sleep(label62->Text->Length / 3 * 1000);

}
private: System::Void label55_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label56_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
