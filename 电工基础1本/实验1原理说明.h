#pragma once
extern bool 实验1原理说明IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1原理说明 摘要
	/// </summary>
	public ref class 实验1原理说明 : public System::Windows::Forms::Form
	{
	public:
		实验1原理说明(void)
		{
			InitializeComponent();
			实验1原理说明IsOpened = true;
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1原理说明()
		{
			实验1原理说明IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"二、原理说明";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(730, 68);
			this->label2->TabIndex = 1;
			this->label2->Text = L"任何一个二端元件的特性可用该元件上的端电压U与通过该元件的电流I之间的函数关系I=F（V）来表示，即用I-V平面上的一条曲线来表征，这条曲线称为该元件的伏安特性曲"
				L"线。";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(3, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(739, 43);
			this->label3->TabIndex = 2;
			this->label3->Text = L" 1．线性电阻器的伏安特性曲线是一条通过坐标原点的直线，如图25-1中a所示，该直线的斜率等于该电阻器的电阻值。";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(742, 92);
			this->label4->TabIndex = 3;
			this->label4->Text = L" 2．一般的白炽灯在工作时灯丝处于高温状态，其灯丝电阻随着温度的升高而增大，通过白炽灯的电流越大，其温度越高，阻值也越大，一般灯泡的“冷电阻”与“热电阻”的阻值可"
				L"相差几倍至十几倍，所以它的伏安特性如图25-1中b曲线所示。";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(712, 107);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3．一般的半导体二极管是一个非线性电阻元件，其特性如图25-l中C曲线。正向压降很小（一般的锗管约为0.2～0.3V，硅管约为0.5～0.7V），正向电流随正向压"
				L"降的升高而急骤上升，而反向电压从零一直增加到十多至几十伏时，其反向电流增加很小，粗略地可视为零。可见，二极管具有单向导电性，但反向电压加得过高，超过管子的极限值"
				L"，则会导致管子击穿损坏。";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(742, 112);
			this->label6->TabIndex = 5;
			this->label6->Text = L"4．稳压二极管是一种特殊的半导体二极管，其正向特性与普通二极管类似，但其反向特性较特别，如图25-1中d曲线。在反向电压开始增加时，其反向电流几乎为零，但当电压增"
				L"加到某一数值时（称为管子的稳压值，有各种不同稳压值的稳压管）电流将突然增加，以后它的端电压将维持恒定，不再随外加的反向电压升高而增大。";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(106, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 12;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1原理说明::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(106, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(757, 589);
			this->panel1->TabIndex = 13;
			// 
			// 实验1原理说明
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 723);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"实验1原理说明";
			this->Text = L"实验1原理说明";
			this->Load += gcnew System::EventHandler(this, &实验1原理说明::实验1原理说明_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1原理说明_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Voice ^ v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label1->Text + label2->Text
		+ label3->Text+ label4->Text + label5->Text
		+ label6->Text);
	}
};
}
