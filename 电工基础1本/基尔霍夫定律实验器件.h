#pragma once


extern bool ����������ʵ������IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����������ʵ������ ժҪ
	/// </summary>
	public ref class ����������ʵ������ : public System::Windows::Forms::Form
	{
	public:
		����������ʵ������(void)
		{
			InitializeComponent();
			����������ʵ������IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			listView1Load();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

		void listView1Load() {
			listView1->Columns->Add("���");
			listView1->Columns->Add("����");
			listView1->Columns->Add("�ͺ�����");
			listView1->Columns->Add("��ע");

			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("�����Ǳ����");
			listView1->Items[0]->SubItems->Add("CL01");
			listView1->Items[0]->SubItems->Add("ѡ��");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("�ɵ�ֱ����ѹ��Դ");
			listView1->Items[1]->SubItems->Add("0��30V  ˫��");
			listView1->Items[1]->SubItems->Add("��Դ��");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("����������");
			listView1->Items[2]->SubItems->Add("");
			listView1->Items[2]->SubItems->Add("DG01");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("���������");
			listView1->Items[3]->SubItems->Add("");
			listView1->Items[3]->SubItems->Add("���");

			for (int i = 0; i < 4; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}


	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����������ʵ������()
		{
			����������ʵ������IsOpened = false;
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
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			// ����������ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 644);
			this->Controls->Add(this->listView1);
			this->Name = L"����������ʵ������";
			this->Text = L"����������ʵ������";
			this->Load += gcnew System::EventHandler(this, &����������ʵ������::����������ʵ������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ����������ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
