#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OperatorsMain
	/// </summary>
	public ref class OperatorsMain : public System::Windows::Forms::Form
	{
	public:
		OperatorsMain(void)
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
		~OperatorsMain()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// OperatorsMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"OperatorsMain";
			this->Text = L"OperatorsMain";
			this->Load += gcnew System::EventHandler(this, &OperatorsMain::OperatorsMain_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OperatorsMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
