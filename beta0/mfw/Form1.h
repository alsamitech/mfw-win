#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "EnterTitle.h"
#include "abwin.h"
#include "fn.cpp"

char fname[64];

namespace mfw {
	bool autosave=true;

	void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars=
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os=chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	char* ofx();

	void pyRun(){
		char pycmd[60]="python";
		strcat(pycmd, "project.py");
		system(pycmd);
	}
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textedit;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autoSaveToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::Button^  SubmitPath;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoSaveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textedit = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SubmitPath = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(614, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->openToolStripMenuItem, 
				this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->openToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->openToolStripMenuItem->Text = L"Open...";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::L));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->clearToolStripMenuItem, 
				this->autoSaveToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::J));
			this->clearToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clearToolStripMenuItem_Click);
			// 
			// autoSaveToolStripMenuItem
			// 
			this->autoSaveToolStripMenuItem->Name = L"autoSaveToolStripMenuItem";
			this->autoSaveToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->autoSaveToolStripMenuItem->Text = L"AutoSave";
			this->autoSaveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autoSaveToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(548, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 24);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textedit
			// 
			this->textedit->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(10) {L"def", L"if", L"else", L"false", 
				L"finally", L"is", L"return", L"import", L"from", L"to"});
			this->textedit->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textedit->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textedit->BackColor = System::Drawing::Color::Silver;
			this->textedit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textedit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textedit->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textedit->Location = System::Drawing::Point(0, 24);
			this->textedit->Multiline = true;
			this->textedit->Name = L"textedit";
			this->textedit->Size = System::Drawing::Size(614, 354);
			this->textedit->TabIndex = 2;
			this->textedit->TabStop = false;
			this->textedit->TextChanged += gcnew System::EventHandler(this, &Form1::textedit_TextChanged);
			this->textedit->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textedit_MouseClick);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel1, 
				this->toolStripProgressBar1});
			this->statusStrip1->Location = System::Drawing::Point(0, 356);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(614, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel1->Text = L"Ready";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystemDirectories;
			this->textBox1->Location = System::Drawing::Point(415, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Enter File Path (abs.)";
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// SubmitPath
			// 
			this->SubmitPath->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->SubmitPath->BackColor = System::Drawing::SystemColors::ControlLight;
			this->SubmitPath->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->SubmitPath->Location = System::Drawing::Point(603, 356);
			this->SubmitPath->Name = L"SubmitPath";
			this->SubmitPath->Size = System::Drawing::Size(10, 21);
			this->SubmitPath->TabIndex = 5;
			this->SubmitPath->Text = L".";
			this->SubmitPath->UseVisualStyleBackColor = false;
			this->SubmitPath->Visible = false;
			this->SubmitPath->Click += gcnew System::EventHandler(this, &Form1::SubmitPath_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(614, 378);
			this->Controls->Add(this->SubmitPath);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->textedit);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"mfw - python";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 EnterTitle^ xdf=gcnew EnterTitle;
				 xdf->Show();
				 pyRun();
			 }
private: System::Void clearToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textedit->Clear();
		 }
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			//OpenFile();
		}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 abwin^ f=gcnew abwin;
			 f->Show();
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if(MessageBox::Show("Do you want to exit?", "mfw - python", MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes){Application::Exit();}else{e->Cancel=true;}
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {\
			 
			 std::string stnnn3;
			 const char* nnnwrite1 = stnnn3.c_str();
			 MarshalString(textedit->Text, stnnn3);
			 std::ofstream wto("project.py");
			 wto<< nnnwrite1<<"\n";

		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void textedit_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			toolStripStatusLabel1->Text="Ready";
			 
			 if(autosave==true){
				 toolStripStatusLabel1->Text="Saving...";
				 std::string nnnx;
				 MarshalString(textedit->Text, nnnx);
				 const char* nnnwrite2 = nnnx.c_str();
				 std::ofstream autosavestream("project.py");
				 autosavestream<< nnnwrite2<<"\n";
				 toolStripStatusLabel1->Text="Saved!";
			 }
		 }
private: System::Void autoSaveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(autosave==true){autosave=false;}else{autosave=true;}
		 }
private: System::Void textedit_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 toolStripStatusLabel1->Text="Editing Text...";
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Show();
			 SubmitPath->Show();
			 toolStripStatusLabel1->Text="Save Dialog Open...";
		 }
private: System::Void SubmitPath_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 //turn the stuff that the string contains into a const char*
			 std::string openpath;
			 MarshalString(textBox1->Text,openpath);
			 const char* lodr=openpath.c_str();
			 std::string getdn;
			 MarshalString(textedit->Text,getdn);
			 const char* getdx=getdn.c_str();

			 std::ofstream fstn(lodr);
			 fstn<<getdx<<std::endl;
		

			 // get the file

			 // change the 

			 // hide everything, nothing happend ;-)
			 toolStripStatusLabel1->Text="Saved!";
			 textBox1->Hide();
			 SubmitPath->Hide();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel1->Text="Waiting For File Path...";
		 }
};
}

