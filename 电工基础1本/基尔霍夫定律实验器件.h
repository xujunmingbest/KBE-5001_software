#pragma once


extern bool 基尔霍夫定律实验器件IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律实验器件 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验器件 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验器件(void)
		{
			InitializeComponent();
			基尔霍夫定律实验器件IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			listView1Load();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void listView1Load() {
			listView1->Columns->Add("序号");
			listView1->Columns->Add("名称");
			listView1->Columns->Add("型号与规格");
			listView1->Columns->Add("备注");

			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("测量仪表挂箱");
			listView1->Items[0]->SubItems->Add("CL01");
			listView1->Items[0]->SubItems->Add("选配");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("可调直流稳压电源");
			listView1->Items[1]->SubItems->Add("0～30V  双组");
			listView1->Items[1]->SubItems->Add("电源屏");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("基尔霍夫定理");
			listView1->Items[2]->SubItems->Add("");
			listView1->Items[2]->SubItems->Add("DG01");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("电流检测线");
			listView1->Items[3]->SubItems->Add("");
			listView1->Items[3]->SubItems->Add("配件");

			for (int i = 0; i < 4; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}


	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律实验器件()
		{
			基尔霍夫定律实验器件IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
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
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(949, 247);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// 基尔霍夫定律实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 644);
			this->Controls->Add(this->listView1);
			this->Name = L"基尔霍夫定律实验器件";
			this->Text = L"基尔霍夫定律实验器件";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验器件::基尔霍夫定律实验器件_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验器件_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
