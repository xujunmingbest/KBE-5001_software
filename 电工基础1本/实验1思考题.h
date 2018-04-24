#pragma once
#include "底部.h"
extern bool 实验1思考题IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1思考题 摘要
	/// </summary>
	public ref class 实验1思考题 : public System::Windows::Forms::Form
	{
	public:
		实验1思考题(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验1思考题IsOpened = true;
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
		~实验1思考题()
		{
			实验1思考题IsOpened = false;
			V->Close();
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"六、思考题";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(16, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(629, 52);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1．线性电阻与非线性电阻的概念是什么？电阻器与二极管的伏安特性有何区别？";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(16, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(641, 54);
			this->label3->TabIndex = 3;
			this->label3->Text = L"2．设某器件伏安特性曲线的函数式为I=F（v），试问在逐点绘制曲线时，其坐标变量应如何放置？";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(16, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(605, 42);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3．稳压二极管与普通二极管有何区别，其用途如何？\r\n";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(64, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 11;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &实验1思考题::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(64, 92);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(706, 408);
			this->panel1->TabIndex = 12;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(863, 147);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 13;
			// 
			// 实验1思考题
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1420, 512);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"实验1思考题";
			this->Text = L"思考题";
			this->Load += gcnew System::EventHandler(this, &实验1思考题::实验1思考题_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1思考题_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Voice ^ V = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		V->Speak(label3->Text + label1->Text +
			label2->Text + label4->Text);
	}

};
}
