#pragma once


extern bool 基尔霍夫定律实验步骤IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 基尔霍夫定律实验步骤 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验步骤 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验步骤(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			基尔霍夫定律实验步骤IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void ListView1Load() {
		
		
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律实验步骤()
		{
			基尔霍夫定律实验步骤IsOpened = false;
			t->Abort();
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律实验步骤::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
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
			this->panel1->Location = System::Drawing::Point(12, 669);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(803, 314);
			this->panel1->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(3, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(747, 23);
			this->label19->TabIndex = 7;
			this->label19->Text = L"5．用万用表分别测量两路电源及电阻元件上的电压值，并记录。";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(3, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(777, 51);
			this->label5->TabIndex = 5;
			this->label5->Text = L"4．将电流插头分别插入三条支路的三个电流插座中，读出并记录电流值。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(3, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(793, 52);
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
			this->button1->Location = System::Drawing::Point(681, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验步骤::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(3, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(793, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．实验前先任意设定三条支路的电流参考方向，如图中的I1、I2、I3所示，并熟悉线路结构，掌握各开关的操作使用方法。";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(793, 48);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2．将开关向上拔，即电阻接入电路中。分别将两路直流稳压源接入电路，令E1＝12V，E2＝6V。";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(796, 647);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(12, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(803, 659);
			this->panel2->TabIndex = 21;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(619, 496);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 10);
			this->label17->TabIndex = 24;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(585, 496);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 10);
			this->label18->TabIndex = 25;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(619, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 10);
			this->label15->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(129, 496);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 10);
			this->label13->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(175, 496);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 10);
			this->label14->TabIndex = 23;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(585, 313);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 10);
			this->label16->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(129, 311);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 10);
			this->label11->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(175, 311);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 10);
			this->label12->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(129, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 10);
			this->label7->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(175, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 10);
			this->label8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(129, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 10);
			this->label9->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(175, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 10);
			this->label10->TabIndex = 14;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(821, 4);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(512, 314);
			this->axWindowsMediaPlayer1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(558, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验步骤::button2_Click);
			// 
			// 基尔霍夫定律实验步骤
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1545, 997);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->panel1);
			this->Name = L"基尔霍夫定律实验步骤";
			this->Text = L"基尔霍夫定律实验步骤";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验步骤::基尔霍夫定律实验步骤_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验步骤_Load(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Width = 900;
		axWindowsMediaPlayer1->Height = 800;
		t = gcnew Thread(gcnew ThreadStart(this,&基尔霍夫定律实验步骤::vedioOnPlay));
		t->Start();
	}
			 Voice ^v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label1->Text + label2->Text + label3->Text
			+ label4->Text + label5->Text + label19->Text);
	}

			 Thread^t;
			 void vedioOnPlay() {
				 VideoShowWidget ^ vsw = gcnew VideoShowWidget;
				 vsw->AddLabel(label9, 0);
				 vsw->AddLabel(label7, 0); //接1K 的电阻

				 vsw->AddLabel(label11, 52);
				 vsw->AddLabel(label13, 52); //介入E1电压源

				 vsw->AddLabel(label15, 73);
				 vsw->AddLabel(label17, 73); //介入E1电压源
				 while (1) {
					 int pos = 0;
					 try {
						 Console::WriteLine(axWindowsMediaPlayer1->Ctlcontrols->currentPosition);
						 pos = axWindowsMediaPlayer1->Ctlcontrols->currentPosition;
					 }
					 catch (System::Exception^e) {

					 }
					 switch (pos) {
					 case 0:vsw->ShowLabel(pos); break;
					 case 52:vsw->ShowLabel(pos); break;
					 case 73:vsw->ShowLabel(pos); break;
					 default:
						 vsw->SuddenChange(pos);
					 }
					 Thread::Sleep(1000);
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	v->Close();
}
};
}
