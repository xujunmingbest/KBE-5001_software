#pragma once
extern bool 实验1实验设备IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 实验1实验设备 摘要
	/// </summary>
	public ref class 实验1实验设备 : public System::Windows::Forms::Form
	{
	public:
		实验1实验设备(void)
		{
			InitializeComponent();
			实验1实验设备IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			listViewLoad();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void listViewLoad() {
			listView1->Columns->Add("序号");
			listView1->Columns->Add("名称");
			listView1->Columns->Add("型号与规格");
			listView1->Columns->Add("数量");
			listView1->Columns->Add("备注");
			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("可调直流稳压电源");
			listView1->Items[0]->SubItems->Add("0～30V");
			listView1->Items[0]->SubItems->Add("1");
			listView1->Items[0]->SubItems->Add("SL-168");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("直流数字毫安表");
			listView1->Items[1]->SubItems->Add("0-200mA");
			listView1->Items[1]->SubItems->Add("1");
			listView1->Items[1]->SubItems->Add("SL-168");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("直流数字电压表");
			listView1->Items[2]->SubItems->Add("0-300V");
			listView1->Items[2]->SubItems->Add("1");
			listView1->Items[2]->SubItems->Add("SL-168");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("二极管");
			listView1->Items[3]->SubItems->Add("2CP15");
			listView1->Items[3]->SubItems->Add("1");
			listView1->Items[3]->SubItems->Add("插件");

			listView1->Items->Add("5");
			listView1->Items[4]->SubItems->Add("稳压管");
			listView1->Items[4]->SubItems->Add("2CW51");
			listView1->Items[4]->SubItems->Add("1");
			listView1->Items[4]->SubItems->Add("插件");

			listView1->Items->Add("6");
			listView1->Items[5]->SubItems->Add("白炽灯");
			listView1->Items[5]->SubItems->Add("12V");
			listView1->Items[5]->SubItems->Add("1");
			listView1->Items[5]->SubItems->Add("插件");

			listView1->Items->Add("7");
			listView1->Items[6]->SubItems->Add("线性电阻器");
			listView1->Items[6]->SubItems->Add("1KΩ");
			listView1->Items[6]->SubItems->Add("1");
			listView1->Items[6]->SubItems->Add("插件");

			for (int i = 0; i < 5; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验设备()
		{
			实验1实验设备IsOpened = false;
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
			this->listView1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1075, 313);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// 实验1实验设备
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 444);
			this->Controls->Add(this->listView1);
			this->Name = L"实验1实验设备";
			this->Text = L"实验1实验设备";
			this->Load += gcnew System::EventHandler(this, &实验1实验设备::实验1实验设备_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1实验设备_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
