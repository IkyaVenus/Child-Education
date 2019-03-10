#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Image_Quiz_Display
	/// </summary>
	public ref class Image_Quiz_Display : public System::Windows::Forms::Form
	{
	public:
		Image_Quiz_Display(void)
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
		~Image_Quiz_Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PB_Quiz_Image;
	private: System::Windows::Forms::Button^  btnNext;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Image_Quiz_Display::typeid));
			this->PB_Quiz_Image = (gcnew System::Windows::Forms::PictureBox());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Quiz_Image))->BeginInit();
			this->SuspendLayout();
			// 
			// PB_Quiz_Image
			// 
			this->PB_Quiz_Image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Quiz_Image.Image")));
			this->PB_Quiz_Image->Location = System::Drawing::Point(190, 43);
			this->PB_Quiz_Image->Name = L"PB_Quiz_Image";
			this->PB_Quiz_Image->Size = System::Drawing::Size(206, 173);
			this->PB_Quiz_Image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_Quiz_Image->TabIndex = 0;
			this->PB_Quiz_Image->TabStop = false;
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(254, 256);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 23);
			this->btnNext->TabIndex = 1;
			this->btnNext->Text = L"NEXT";
			this->btnNext->UseVisualStyleBackColor = true;
			// 
			// Image_Quiz_Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 500);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->PB_Quiz_Image);
			this->Name = L"Image_Quiz_Display";
			this->Text = L"Image_Quiz_Display";
			this->Load += gcnew System::EventHandler(this, &Image_Quiz_Display::Image_Quiz_Display_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Quiz_Image))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Image_Quiz_Display_Load(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 //String^ domain = "Camel";
					 int id = 1;
					 String ^ Sql = "Select [Image] from Image_Quiz_Display where [PlayerID] = " + id + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 //MessageBox::Show(command->ExecuteScalar()->ToString());
					 command->ExecuteScalar();
					 Image ^image1;
					 String ^ str = "C:\\Users\\Vakul Gupta\\Desktop\\Software-3\\Child-Education\\FunBrainz\\FunBrainz\\media\\" + command->ExecuteScalar()->ToString();
					 image1 = gcnew Bitmap(str);
					 PB_Quiz_Image->Image = image1;

					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
	}
	};
}
