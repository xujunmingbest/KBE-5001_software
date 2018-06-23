#pragma once

namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 一阶电路的响应测试实验器件 摘要
	/// </summary>
	public ref class 一阶电路的响应测试实验器件 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试实验器件(void)
		{
			InitializeComponent();
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
		~一阶电路的响应测试实验器件()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(725, 234);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(606, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验器件::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(479, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"停止";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// 一阶电路的响应测试实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(749, 470);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView1);
			this->Name = L"一阶电路的响应测试实验器件";
			this->Text = L"一阶电路的响应测试实验器件";
			this->Load += gcnew System::EventHandler(this, &一阶电路的响应测试实验器件::一阶电路的响应测试实验器件_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 一阶电路的响应测试实验器件_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Columns->Add("序号");
		listView1->Columns->Add("名称");
		listView1->Columns->Add("型号与规格");
		listView1->Columns->Add("备注");
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("函数信号发生器");
		listView1->Items[0]->SubItems->Add("");
		listView1->Items[0]->SubItems->Add("电源屏");
		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("双踪示波器");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("选配");
		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("一阶/二阶动态电路");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("DG01");
		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		global::voice->Speak(listView1->Items[0]->SubItems[0]->Text+ listView1->Items[0]->SubItems[1]->Text + listView1->Items[0]->SubItems[2]->Text + listView1->Items[0]->SubItems[3]->Text
		+"。" +listView1->Items[1]->SubItems[0]->Text + listView1->Items[1]->SubItems[1]->Text + listView1->Items[1]->SubItems[2]->Text + listView1->Items[1]->SubItems[3]->Text
			+"。" + listView1->Items[2]->SubItems[0]->Text + listView1->Items[2]->SubItems[1]->Text + listView1->Items[2]->SubItems[2]->Text + listView1->Items[2]->SubItems[3]->Text
		);

	}
};
}
