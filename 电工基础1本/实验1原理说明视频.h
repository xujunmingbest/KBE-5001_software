#pragma once
extern bool ʵ��1ԭ��˵����ƵIsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1ԭ��˵����Ƶ ժҪ
	/// </summary>
	public ref class ʵ��1ԭ��˵����Ƶ : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ԭ��˵����Ƶ(void)
		{
			InitializeComponent();
			ʵ��1ԭ��˵����ƵIsOpened = true;
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ԭ��˵����Ƶ()
		{
			ʵ��1ԭ��˵����ƵIsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ʵ��1ԭ��˵����Ƶ::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(12, 12);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(481, 399);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// ʵ��1ԭ��˵����Ƶ
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(505, 423);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Name = L"ʵ��1ԭ��˵����Ƶ";
			this->Text = L"ʵ��1ԭ��˵����Ƶ";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ԭ��˵����Ƶ::ʵ��1ԭ��˵����Ƶ_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ԭ��˵����Ƶ_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
