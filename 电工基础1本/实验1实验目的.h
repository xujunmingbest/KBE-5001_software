#pragma once
#include <windows.h>
#include "tool.h"
extern bool ʵ��1ʵ��Ŀ��IsOpened ;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��1ʵ��Ŀ�� ժҪ
	/// </summary>
	public ref class ʵ��1ʵ��Ŀ�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ��Ŀ��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��1ʵ��Ŀ��IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ʵ��Ŀ��()
		{
			v->Close();
			ʵ��1ʵ��Ŀ��IsOpened = false;
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
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"һ��ʵ��Ŀ��";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(587, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1����֤���������ɵ���ȷ�ԣ�����Ի��������ɵ���⡣";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 238);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(482, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2��ѧ���õ�����ͷ������������֧·�����ķ�����";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(155, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 11;
			this->button1->Text = L"�����ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��1ʵ��Ŀ��::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(155, 69);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(667, 397);
			this->panel1->TabIndex = 12;
			// 
			// ʵ��1ʵ��Ŀ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1124, 691);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"ʵ��1ʵ��Ŀ��";
			this->Text = L"ʵ��1ʵ��Ŀ��";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ʵ��1ʵ��Ŀ��::ʵ��1ʵ��Ŀ��_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ��Ŀ��::ʵ��1ʵ��Ŀ��_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ʵ��Ŀ��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ʵ��1ʵ��Ŀ��_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		ʵ��1ʵ��Ŀ��IsOpened = false;
	}
			 Voice ^v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label1->Text + 
			label2->Text + label3->Text);
	}

};
}
