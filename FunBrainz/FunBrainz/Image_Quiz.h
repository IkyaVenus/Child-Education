#pragma once
#include "Image_Quiz_Display.h"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Image_Quiz
	/// </summary>
	public ref class Image_Quiz : public System::Windows::Forms::Form
	{
	public:
		Image_Quiz(void)
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
		~Image_Quiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Animal;
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
			this->btn_Animal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_Animal
			// 
			this->btn_Animal->Location = System::Drawing::Point(69, 119);
			this->btn_Animal->Name = L"btn_Animal";
			this->btn_Animal->Size = System::Drawing::Size(105, 36);
			this->btn_Animal->TabIndex = 0;
			this->btn_Animal->Text = L"ANIMALS";
			this->btn_Animal->UseVisualStyleBackColor = true;
			this->btn_Animal->Click += gcnew System::EventHandler(this, &Image_Quiz::btn_Animal_Click);
			// 
			// Image_Quiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 485);
			this->Controls->Add(this->btn_Animal);
			this->Name = L"Image_Quiz";
			this->Text = L"Image_Quiz";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_Animal_Click(System::Object^  sender, System::EventArgs^  e) {
				 Image_Quiz::Hide();
				 Image_Quiz_Display ^ form = gcnew Image_Quiz_Display;
				 form->ShowDialog();
	}
	};
}
