#pragma once
#include "OperatorsMain.h"
#include "Cricket.h"
#include "MyForm1.h"

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btn_2048;
	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_2048 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 113);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// btn_2048
			// 
			this->btn_2048->Location = System::Drawing::Point(66, 60);
			this->btn_2048->Name = L"btn_2048";
			this->btn_2048->Size = System::Drawing::Size(75, 23);
			this->btn_2048->TabIndex = 1;
			this->btn_2048->Text = L"button2";
			this->btn_2048->UseVisualStyleBackColor = true;
			this->btn_2048->Click += gcnew System::EventHandler(this, &Login::btn_2048_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(212, 206);
			this->Controls->Add(this->btn_2048);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try { 
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection(); 
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;"; 
					 String ^ Sql = "Delete from Students where StudentId = 2"; 
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con); 
					 con->Open(); 
					 command->ExecuteNonQuery(); 
					 con->Close(); }
				 catch (Exception ^ ex) { 
					 MessageBox::Show(ex->Message); 
				 } 
				 MessageBox::Show("Hi"); 
				 Login::Hide(); 
				 Cricket ^ form = gcnew Cricket; 
				 form->ShowDialog();
	}
	private: System::Void btn_2048_Click(System::Object^  sender, System::EventArgs^  e) {
				 Login::Hide();
				 MyForm1^ form = gcnew MyForm1;
				 form->ShowDialog();
			
	}
	};
}
