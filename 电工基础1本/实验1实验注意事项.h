#pragma once
extern bool 实验1实验注意事项IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1实验注意事项 摘要
	/// </summary>
	public ref class 实验1实验注意事项 : public System::Windows::Forms::Form
	{
	public:
		实验1实验注意事项(void)
		{
			InitializeComponent();
			实验1实验注意事项IsOpened = true;
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
		~实验1实验注意事项()
		{
			if (t != nullptr) t->Abort();
			实验1实验注意事项IsOpened = false;
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
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"五、实验注意事项";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(3, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(667, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．测二极管正向特性时，稳压电源输出应由小至大逐渐增加，应时刻注意电流表读数不得超过25mA，稳压源输出端切勿碰线短路。";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(3, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(667, 54);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2．进行不同实验时，应先估算电压和电流值，合理选择仪表的量程，勿使仪表超量程，仪表的极性亦不可接错。";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1实验注意事项::button1_Click);
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
			this->panel1->Location = System::Drawing::Point(30, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(696, 350);
			this->panel1->TabIndex = 4;
			// 
			// 实验1实验注意事项
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 477);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"实验1实验注意事项";
			this->Text = L"实验1实验注意事项";
			this->Load += gcnew System::EventHandler(this, &实验1实验注意事项::实验1实验注意事项_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1实验注意事项_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		VoiceControl();
	}
			 Thread^t;
			 void VoiceControl()
			 {
				 if (t == nullptr) {
					 t = gcnew Thread(gcnew ThreadStart(this, &实验1实验注意事项::Speek));
					 t->Start();
					 t->IsBackground = true;
					 return;
				 }
				 if (t->ThreadState.ToString()->Contains("Background"))
				 {
					 底部^ 底部wnd = gcnew 底部("请等待朗读完毕");
					 底部wnd->ShowDialog();
					 return;
				 }
				 t = gcnew Thread(gcnew ThreadStart(this, &实验1实验注意事项::Speek));
				 t->Start();
				 t->IsBackground = true;
				 return;
			 }
			 void Speek() {
				 voice_speek(label1->Text);
				 voice_speek(label2->Text);
				 voice_speek(label3->Text);
			 }
};
}
