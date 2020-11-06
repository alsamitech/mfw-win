#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//char fnx[64];

namespace mfw {

	/// <summary>
	/// Summary for EnterTitle
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class EnterTitle : public System::Windows::Forms::Form
	{
	public:
		EnterTitle(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnterTitle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ProgressBar^  progg;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progg = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter File Name:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(322, 21);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EnterTitle::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnterTitle::button1_Click);
			// 
			// progg
			// 
			this->progg->Location = System::Drawing::Point(287, 2);
			this->progg->Name = L"progg";
			this->progg->Size = System::Drawing::Size(76, 10);
			this->progg->TabIndex = 3;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &EnterTitle::timer1_Tick);
			// 
			// EnterTitle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 88);
			this->Controls->Add(this->progg);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"EnterTitle";
			this->Text = L"mfw python - Enter Title";
			this->Load += gcnew System::EventHandler(this, &EnterTitle::EnterTitle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EnterTitle_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 bool textfl=true;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::String^ fn33=textBox1->Text;
				 this->timer1->Start();
				 this->Hide();
				 String^ yinYin = textBox1->Text;
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->progg->Increment(3);
			 }
};
}
