#pragma once

namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	/// <summary>
	/// 一阶电路的响应测试实验内容 摘要
	/// </summary>
	public ref class 一阶电路的响应测试实验内容 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试实验内容(void)
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
		~一阶电路的响应测试实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: _LogBox::LogBox^  logBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"R＝30KΩ，C＝1000PF（K2、K11闭合，其他断开）,Um＝3V，F＝1KHz",
					L"R＝10KΩ，C＝0.1μF（K1、K16闭合，其他断开）,Um＝3V，F＝1KHz", L"C＝0.01μF，R＝100Ω。（K4、K6闭合，其他断开）,（Um＝2V，F =1KHz）"
			});
			this->comboBox1->Location = System::Drawing::Point(33, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(598, 26);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"请选择电路类型";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->logBox1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Location = System::Drawing::Point(22, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1623, 884);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验具体内容";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(33, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(165, 34);
			this->label2->TabIndex = 7;
			this->label2->Text = L"对应的时间τ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 34);
			this->textBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(33, 649);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(566, 193);
			this->label1->TabIndex = 5;
			this->label1->Text = L"                实验内容操作说明\r\n\r\n1：仔细阅读实验原理与实验步骤\r\n2：选择对应的电路类型，并修改DG1上的电路\r\n3：根据对应的电路类型的"
				L"示波器显示,进行截图\r\n4：根据电路类型求解τ\r\n5： 示波器成绩上传";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(726, 613);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"成绩上传";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button2_Click);
			// 
			// logBox1
			// 
			this->logBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->logBox1->Location = System::Drawing::Point(885, 113);
			this->logBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(689, 456);
			this->logBox1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(33, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(822, 456);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(673, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"获取波形截图";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::button1_Click);
			// 
			// 一阶电路的响应测试实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1700, 1000);
			this->Controls->Add(this->groupBox1);
			this->Name = L"一阶电路的响应测试实验内容";
			this->Text = L"一阶电路的响应测试实验内容";
			this->Load += gcnew System::EventHandler(this, &一阶电路的响应测试实验内容::一阶电路的响应测试实验内容_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 一阶电路的响应测试实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == -1) {
		logBox1->LogErr("请选择电路类型");
		return;
	}
	String ^FileName = gcnew String(Grades[6].c_str()) + "-" + comboBox1->SelectedIndex + "-" + global::Pupilage + ".bmp";
	if (oscillograph::GetOscilloscopePrtScnBmp(T_to_string(FileName))) {
		logBox1->LogInfo( FileName + " 截图成功");
		pictureBox1->ImageLocation = "bmp/" + FileName;
	}
	else {
		logBox1->LogErr(comboBox1->Text + "截图失败");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SSCHandle_e  sse;
	String ^FileName = gcnew String(Grades[6].c_str()) + "-" + comboBox1->SelectedIndex + "-" + global::Pupilage ;
	string path = "bmp/"+T_to_string(FileName+".bmp");
	string data;
	if (!sse._ReadFile(path, data)) {
		logBox1->LogErr("成绩传输失败");
		return;
	}
	Head H;
	DateTime t = DateTime::Now;
	snprintf(H.DateTime, sizeof(H.DateTime), "%04d-%02d-%02d", t.Year, t.Month, t.Day);
	snprintf(H.FileName, sizeof(H.FileName), "%s", T_to_string(FileName + ".bmp").c_str());
	snprintf(H.MsgType, sizeof(H.MsgType), "%s", "PIC");
	snprintf(H.Pupilage, sizeof(H.Pupilage), "%s", global::Pupilage);
	snprintf(H.RequestType, sizeof(H.RequestType), "SAVEFILE");
	H.TrialCode = 6;
	snprintf(H.TrialName, sizeof(H.TrialName), "%s", Grades[6]);
	string ret = sse.SSCSend(H, data);
	if (ret.find("失败") != ret.npos) logBox1->LogErr(gcnew String(ret.c_str()));
	else  logBox1->LogInfo(gcnew String(ret.c_str()));

	XmlDocument^ myXmlDoc = gcnew XmlDocument();
	XmlDeclaration ^xmldecl;
	xmldecl = myXmlDoc->CreateXmlDeclaration("1.0", "GB2312", "yes");
	XmlElement^ Root = myXmlDoc->CreateElement("data");
	myXmlDoc->AppendChild(Root);
	myXmlDoc->InsertBefore(xmldecl, Root);
	XmlElement ^Element1 = myXmlDoc->CreateElement("τ");
	Element1->SetAttribute("des", "时间常数τ");
	Element1->InnerText = textBox1->Text;
	Root->AppendChild(Element1);
	string temppath = string(DATATEMP) + "DATATEMP.xml";
	myXmlDoc->Save(gcnew String(temppath.c_str()));
	snprintf(H.FileName, sizeof(H.FileName), "%s", FileName + ".xml");
	snprintf(H.MsgType, sizeof(H.MsgType), "%s", "XML");
	snprintf(H.Pupilage, sizeof(H.Pupilage), "%s", global::Pupilage);
	
	if (!sse._ReadFile(temppath, data)) {
		logBox1->LogErr("τxml文件读取失败"); 
		return;
	}
    ret = sse.SSCSend(H, data);

	if (ret.find("失败") != ret.npos) logBox1->LogErr(gcnew String(ret.c_str()));
	else  logBox1->LogInfo(gcnew String(ret.c_str()));
}

private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!global::scs->SetWaveForm(SQUAREWAVE) ){
		logBox1->LogErr("方波设置失败,请手动调节");
		return;
	}
	switch (comboBox1->SelectedIndex) {
	case 0:
		if (!global::scs->SetFrequency(100000)) {
			logBox1->LogErr("频率设置失败,请手动调节");
			return;
		}
	case 1:
		if (!global::scs->SetFrequency(100000)) {
			logBox1->LogErr("频率设置失败,请手动调节");
			return;
		}
	case 2:
		if (!global::scs->SetFrequency(100000)) {
			logBox1->LogErr("频率设置失败,请手动调节");
			return;
		}
	}
}
};
}
