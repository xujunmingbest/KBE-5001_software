#pragma once
extern bool ʵ��1ʵ���豸IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1ʵ���豸 ժҪ
	/// </summary>
	public ref class ʵ��1ʵ���豸 : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ���豸(void)
		{
			InitializeComponent();
			ʵ��1ʵ���豸IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			listViewLoad();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

		void listViewLoad() {
			listView1->Columns->Add("���");
			listView1->Columns->Add("����");
			listView1->Columns->Add("�ͺ�����");
			listView1->Columns->Add("����");
			listView1->Columns->Add("��ע");
			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("�ɵ�ֱ����ѹ��Դ");
			listView1->Items[0]->SubItems->Add("0��30V");
			listView1->Items[0]->SubItems->Add("1");
			listView1->Items[0]->SubItems->Add("SL-168");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("ֱ�����ֺ�����");
			listView1->Items[1]->SubItems->Add("0-200mA");
			listView1->Items[1]->SubItems->Add("1");
			listView1->Items[1]->SubItems->Add("SL-168");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("ֱ�����ֵ�ѹ��");
			listView1->Items[2]->SubItems->Add("0-300V");
			listView1->Items[2]->SubItems->Add("1");
			listView1->Items[2]->SubItems->Add("SL-168");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("������");
			listView1->Items[3]->SubItems->Add("2CP15");
			listView1->Items[3]->SubItems->Add("1");
			listView1->Items[3]->SubItems->Add("���");

			listView1->Items->Add("5");
			listView1->Items[4]->SubItems->Add("��ѹ��");
			listView1->Items[4]->SubItems->Add("2CW51");
			listView1->Items[4]->SubItems->Add("1");
			listView1->Items[4]->SubItems->Add("���");

			listView1->Items->Add("6");
			listView1->Items[5]->SubItems->Add("�׳��");
			listView1->Items[5]->SubItems->Add("12V");
			listView1->Items[5]->SubItems->Add("1");
			listView1->Items[5]->SubItems->Add("���");

			listView1->Items->Add("7");
			listView1->Items[6]->SubItems->Add("���Ե�����");
			listView1->Items[6]->SubItems->Add("1K��");
			listView1->Items[6]->SubItems->Add("1");
			listView1->Items[6]->SubItems->Add("���");

			for (int i = 0; i < 5; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ʵ���豸()
		{
			ʵ��1ʵ���豸IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			// ʵ��1ʵ���豸
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 444);
			this->Controls->Add(this->listView1);
			this->Name = L"ʵ��1ʵ���豸";
			this->Text = L"ʵ��1ʵ���豸";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ���豸::ʵ��1ʵ���豸_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ʵ���豸_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
