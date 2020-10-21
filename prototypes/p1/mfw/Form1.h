#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EnterTitle.h"
#include "abwin.h"
#include "fn.cpp"

char fname[64];

namespace mfw {

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textedit = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
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
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->openToolStripMenuItem});
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
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->clearToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::J));
			this->clearToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clearToolStripMenuItem_Click);
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
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(548, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Run";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textedit
			// 
			this->textedit->BackColor = System::Drawing::Color::DarkGray;
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
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(614, 378);
			this->Controls->Add(this->textedit);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"mfw - python";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
};
}

