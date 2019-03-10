#pragma once
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<algorithm>

using namespace std;

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn11;
	protected:

	protected:

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  btn33;

	private: System::Windows::Forms::Button^  btn32;

	private: System::Windows::Forms::Button^  btn31;

	private: System::Windows::Forms::Button^  btn24;

	private: System::Windows::Forms::Button^  btn23;

	private: System::Windows::Forms::Button^  btn22;

	private: System::Windows::Forms::Button^  btn21;

	private: System::Windows::Forms::Button^  btn14;

	private: System::Windows::Forms::Button^  btn13;

	private: System::Windows::Forms::Button^  btn12;
	private: System::Windows::Forms::Button^  btn34;
	private: System::Windows::Forms::Button^  btn44;




	private: System::Windows::Forms::Button^  btn43;

	private: System::Windows::Forms::Button^  btn42;

	private: System::Windows::Forms::Button^  btn41;
	private: System::Windows::Forms::Button^  btnLeft;
	private: System::Windows::Forms::Button^  btnDown;
	private: System::Windows::Forms::Button^  btnRight;
	private: System::Windows::Forms::Button^  btnUp;
	private: System::Windows::Forms::Button^  btnNewGame;
	private: System::Windows::Forms::Label^  lbl_Score_Title;
	private: System::Windows::Forms::Label^  lbl_Score_Value;
	private: System::Windows::Forms::Label^  lblMax_Score_Title;
	private: System::Windows::Forms::Label^  lblMax_Score_Value;







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
			this->btn11 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->btn33 = (gcnew System::Windows::Forms::Button());
			this->btn32 = (gcnew System::Windows::Forms::Button());
			this->btn31 = (gcnew System::Windows::Forms::Button());
			this->btn24 = (gcnew System::Windows::Forms::Button());
			this->btn23 = (gcnew System::Windows::Forms::Button());
			this->btn22 = (gcnew System::Windows::Forms::Button());
			this->btn21 = (gcnew System::Windows::Forms::Button());
			this->btn14 = (gcnew System::Windows::Forms::Button());
			this->btn13 = (gcnew System::Windows::Forms::Button());
			this->btn12 = (gcnew System::Windows::Forms::Button());
			this->btn34 = (gcnew System::Windows::Forms::Button());
			this->btn44 = (gcnew System::Windows::Forms::Button());
			this->btn43 = (gcnew System::Windows::Forms::Button());
			this->btn42 = (gcnew System::Windows::Forms::Button());
			this->btn41 = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->lbl_Score_Title = (gcnew System::Windows::Forms::Label());
			this->lbl_Score_Value = (gcnew System::Windows::Forms::Label());
			this->lblMax_Score_Title = (gcnew System::Windows::Forms::Label());
			this->lblMax_Score_Value = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn11
			// 
			this->btn11->Location = System::Drawing::Point(171, 94);
			this->btn11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn11->Name = L"btn11";
			this->btn11->Size = System::Drawing::Size(104, 59);
			this->btn11->TabIndex = 0;
			this->btn11->Text = L"button1";
			this->btn11->UseVisualStyleBackColor = true;
			// 
			// btn33
			// 
			this->btn33->Location = System::Drawing::Point(391, 224);
			this->btn33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn33->Name = L"btn33";
			this->btn33->Size = System::Drawing::Size(104, 59);
			this->btn33->TabIndex = 3;
			this->btn33->Text = L"button1";
			this->btn33->UseVisualStyleBackColor = true;
			// 
			// btn32
			// 
			this->btn32->Location = System::Drawing::Point(281, 224);
			this->btn32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn32->Name = L"btn32";
			this->btn32->Size = System::Drawing::Size(104, 59);
			this->btn32->TabIndex = 4;
			this->btn32->Text = L"button1";
			this->btn32->UseVisualStyleBackColor = true;
			// 
			// btn31
			// 
			this->btn31->Location = System::Drawing::Point(171, 224);
			this->btn31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn31->Name = L"btn31";
			this->btn31->Size = System::Drawing::Size(104, 59);
			this->btn31->TabIndex = 5;
			this->btn31->Text = L"button1";
			this->btn31->UseVisualStyleBackColor = true;
			// 
			// btn24
			// 
			this->btn24->Location = System::Drawing::Point(501, 159);
			this->btn24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn24->Name = L"btn24";
			this->btn24->Size = System::Drawing::Size(104, 59);
			this->btn24->TabIndex = 6;
			this->btn24->Text = L"button1";
			this->btn24->UseVisualStyleBackColor = true;
			// 
			// btn23
			// 
			this->btn23->Location = System::Drawing::Point(391, 159);
			this->btn23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn23->Name = L"btn23";
			this->btn23->Size = System::Drawing::Size(104, 59);
			this->btn23->TabIndex = 7;
			this->btn23->Text = L"button1";
			this->btn23->UseVisualStyleBackColor = true;
			// 
			// btn22
			// 
			this->btn22->Location = System::Drawing::Point(281, 159);
			this->btn22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn22->Name = L"btn22";
			this->btn22->Size = System::Drawing::Size(104, 59);
			this->btn22->TabIndex = 8;
			this->btn22->Text = L"button1";
			this->btn22->UseVisualStyleBackColor = true;
			// 
			// btn21
			// 
			this->btn21->Location = System::Drawing::Point(171, 159);
			this->btn21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn21->Name = L"btn21";
			this->btn21->Size = System::Drawing::Size(104, 59);
			this->btn21->TabIndex = 9;
			this->btn21->Text = L"button1";
			this->btn21->UseVisualStyleBackColor = true;
			// 
			// btn14
			// 
			this->btn14->Location = System::Drawing::Point(497, 94);
			this->btn14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn14->Name = L"btn14";
			this->btn14->Size = System::Drawing::Size(104, 59);
			this->btn14->TabIndex = 10;
			this->btn14->Text = L"button1";
			this->btn14->UseVisualStyleBackColor = true;
			// 
			// btn13
			// 
			this->btn13->Location = System::Drawing::Point(391, 94);
			this->btn13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn13->Name = L"btn13";
			this->btn13->Size = System::Drawing::Size(104, 59);
			this->btn13->TabIndex = 11;
			this->btn13->Text = L"button1";
			this->btn13->UseVisualStyleBackColor = true;
			// 
			// btn12
			// 
			this->btn12->Location = System::Drawing::Point(281, 94);
			this->btn12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn12->Name = L"btn12";
			this->btn12->Size = System::Drawing::Size(104, 59);
			this->btn12->TabIndex = 12;
			this->btn12->Text = L"button1";
			this->btn12->UseVisualStyleBackColor = true;
			// 
			// btn34
			// 
			this->btn34->Location = System::Drawing::Point(501, 224);
			this->btn34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn34->Name = L"btn34";
			this->btn34->Size = System::Drawing::Size(104, 59);
			this->btn34->TabIndex = 13;
			this->btn34->Text = L"button1";
			this->btn34->UseVisualStyleBackColor = true;
			// 
			// btn44
			// 
			this->btn44->Location = System::Drawing::Point(501, 288);
			this->btn44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn44->Name = L"btn44";
			this->btn44->Size = System::Drawing::Size(104, 59);
			this->btn44->TabIndex = 14;
			this->btn44->Text = L"button1";
			this->btn44->UseVisualStyleBackColor = true;
			// 
			// btn43
			// 
			this->btn43->Location = System::Drawing::Point(391, 289);
			this->btn43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn43->Name = L"btn43";
			this->btn43->Size = System::Drawing::Size(104, 59);
			this->btn43->TabIndex = 15;
			this->btn43->Text = L"button1";
			this->btn43->UseVisualStyleBackColor = true;
			// 
			// btn42
			// 
			this->btn42->Location = System::Drawing::Point(281, 289);
			this->btn42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn42->Name = L"btn42";
			this->btn42->Size = System::Drawing::Size(104, 59);
			this->btn42->TabIndex = 16;
			this->btn42->Text = L"button1";
			this->btn42->UseVisualStyleBackColor = true;
			// 
			// btn41
			// 
			this->btn41->Location = System::Drawing::Point(171, 289);
			this->btn41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn41->Name = L"btn41";
			this->btn41->Size = System::Drawing::Size(104, 59);
			this->btn41->TabIndex = 17;
			this->btn41->Text = L"button1";
			this->btn41->UseVisualStyleBackColor = true;
			// 
			// btnLeft
			// 
			this->btnLeft->Location = System::Drawing::Point(727, 194);
			this->btnLeft->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(75, 23);
			this->btnLeft->TabIndex = 18;
			this->btnLeft->Text = L"LEFT";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Click += gcnew System::EventHandler(this, &MyForm1::btnLeft_Click);
			// 
			// btnDown
			// 
			this->btnDown->Location = System::Drawing::Point(808, 194);
			this->btnDown->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(75, 23);
			this->btnDown->TabIndex = 19;
			this->btnDown->Text = L"DOWN";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &MyForm1::btnDown_Click);
			// 
			// btnRight
			// 
			this->btnRight->Location = System::Drawing::Point(889, 194);
			this->btnRight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(75, 23);
			this->btnRight->TabIndex = 20;
			this->btnRight->Text = L"RIGHT";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &MyForm1::btnRight_Click);
			// 
			// btnUp
			// 
			this->btnUp->Location = System::Drawing::Point(808, 166);
			this->btnUp->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(75, 23);
			this->btnUp->TabIndex = 21;
			this->btnUp->Text = L"UP";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &MyForm1::btnUp_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->Location = System::Drawing::Point(787, 94);
			this->btnNewGame->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(123, 41);
			this->btnNewGame->TabIndex = 22;
			this->btnNewGame->Text = L"NEW GAME";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm1::btnNewGame_Click);
			// 
			// lbl_Score_Title
			// 
			this->lbl_Score_Title->AutoSize = true;
			this->lbl_Score_Title->Location = System::Drawing::Point(319, 64);
			this->lbl_Score_Title->Name = L"lbl_Score_Title";
			this->lbl_Score_Title->Size = System::Drawing::Size(56, 17);
			this->lbl_Score_Title->TabIndex = 23;
			this->lbl_Score_Title->Text = L"SCORE";
			// 
			// lbl_Score_Value
			// 
			this->lbl_Score_Value->AutoSize = true;
			this->lbl_Score_Value->Location = System::Drawing::Point(388, 64);
			this->lbl_Score_Value->Name = L"lbl_Score_Value";
			this->lbl_Score_Value->Size = System::Drawing::Size(16, 17);
			this->lbl_Score_Value->TabIndex = 24;
			this->lbl_Score_Value->Text = L"0";
			// 
			// lblMax_Score_Title
			// 
			this->lblMax_Score_Title->AutoSize = true;
			this->lblMax_Score_Title->Location = System::Drawing::Point(590, 42);
			this->lblMax_Score_Title->Name = L"lblMax_Score_Title";
			this->lblMax_Score_Title->Size = System::Drawing::Size(89, 17);
			this->lblMax_Score_Title->TabIndex = 25;
			this->lblMax_Score_Title->Text = L"MAX SCORE";
			// 
			// lblMax_Score_Value
			// 
			this->lblMax_Score_Value->AutoSize = true;
			this->lblMax_Score_Value->Location = System::Drawing::Point(685, 42);
			this->lblMax_Score_Value->Name = L"lblMax_Score_Value";
			this->lblMax_Score_Value->Size = System::Drawing::Size(16, 17);
			this->lblMax_Score_Value->TabIndex = 26;
			this->lblMax_Score_Value->Text = L"0";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 526);
			this->Controls->Add(this->lblMax_Score_Value);
			this->Controls->Add(this->lblMax_Score_Title);
			this->Controls->Add(this->lbl_Score_Value);
			this->Controls->Add(this->lbl_Score_Title);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnDown);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btn41);
			this->Controls->Add(this->btn42);
			this->Controls->Add(this->btn43);
			this->Controls->Add(this->btn44);
			this->Controls->Add(this->btn34);
			this->Controls->Add(this->btn12);
			this->Controls->Add(this->btn13);
			this->Controls->Add(this->btn14);
			this->Controls->Add(this->btn21);
			this->Controls->Add(this->btn22);
			this->Controls->Add(this->btn23);
			this->Controls->Add(this->btn24);
			this->Controls->Add(this->btn31);
			this->Controls->Add(this->btn32);
			this->Controls->Add(this->btn33);
			this->Controls->Add(this->btn11);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		int convert_string_to_int(String^ s){
			int n = s->Length;
			int base = 1;
			int ans = 0;
			for (int i = s->Length - 1; i >= 0; i--){
				ans += (s[i] - 48) * base;
				base *= 10;
			}
			return ans;
		}
		bool isFull(){
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool flag = 1;
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text == ""){
						flag = 0;
					}
				}
			}
			return flag;
		}
		void Begin(){

			btnLeft->Enabled = true;
			btnRight->Enabled = true;
			btnUp->Enabled = true;
			btnDown->Enabled = true;
			lbl_Score_Value->Text = "0";
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			for (int i = 0; i < 4; i++){
				for (int j = 0; j < 4; j++){
					buttons[i, j]->Text = "";
				}
			}
			srand(time(0));
			int row1 = rand() % 4;
			int col1 = rand() % 4;
			buttons[row1, col1]->Text = "2";
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					buttons[row2, col2]->Text = "2";
					break;
				}
			}

			try {
				OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
				int stuID = 1;

				String ^ Sql = "Select [Max_Score] from 2048_Game where [StudentID] = " + stuID + ";";
				OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				int dummy = (int)command->ExecuteScalar();
				lblMax_Score_Value->Text = dummy.ToString();
				con->Close();
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}


		}
		bool is_Game_Over(){
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			//FOR LEFT MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR RIGHT MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR UP MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			//FOR DOWN MOVE
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
			}
			return (!hasMoved);
		}

		void Move_Left(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text),convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[i, j]->Text = help_arr_2[j];
				}
			}
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();

			if (hasMoved == false){
				MessageBox::Show("Can't move left");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}

		}
		void Move_Right(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[i, j]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[i, j]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[i, j]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[i, j]->Text = help_arr_2[j];
				}
			}
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move right");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
		}
		void Move_Up(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 0;
				int j = 0;
				for (j = 0; j < help_arr_1_size - 1; j++){
					if (help_arr_1[j] != help_arr_1[j + 1]){
						help_arr_2[help_arr_2_size++] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size++] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j++;
				}
				if (j == (help_arr_1_size - 1)){
					help_arr_2[help_arr_2_size++] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[j, i]->Text = help_arr_2[j];
				}
			}
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move up");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
		}
		void Move_Down(){
			int score = 0;
			if (is_Game_Over()){
				MessageBox::Show("Game Over");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool hasMoved = false;
			for (int i = 0; i < 4; i++){
				array<String^> ^help_arr_1 = { "", "", "", "" };
				int help_arr_1_size = 0;
				for (int j = 0; j < 4; j++){
					if (buttons[j, i]->Text != ""){
						help_arr_1[help_arr_1_size++] = buttons[j, i]->Text;
					}
				}
				array<String^> ^help_arr_2 = { "", "", "", "" };
				int help_arr_2_size = 3;
				int j = 0;
				for (j = help_arr_1_size - 1; j > 0; j--){
					if (help_arr_1[j] != help_arr_1[j - 1]){
						help_arr_2[help_arr_2_size--] = help_arr_1[j];
						continue;
					}
					score += (2 * convert_string_to_int(help_arr_1[j]));
					help_arr_2[help_arr_2_size--] = (2 * convert_string_to_int(help_arr_1[j])).ToString();
					j--;
				}
				if (j == 0){
					help_arr_2[help_arr_2_size--] = help_arr_1[j];
				}
				for (j = 0; j < 4; j++){
					if (buttons[j, i]->Text != help_arr_2[j]){
						hasMoved = true;
						break;
					}
				}
				for (j = 0; j < 4; j++){
					buttons[j, i]->Text = help_arr_2[j];
				}
			}
			int new_score = convert_string_to_int(lbl_Score_Value->Text) + score;
			lbl_Score_Value->Text = new_score.ToString();
			if (hasMoved == false){
				MessageBox::Show("Can't move down");
				return;
			}
			while (1){
				int row2 = rand() % 4;
				int col2 = rand() % 4;
				if (buttons[row2, col2]->Text == ""){
					int new_number = rand() % 2;
					if (new_number == 0){
						new_number = 2;
					}
					else{
						new_number = 4;
					}
					buttons[row2, col2]->Text = new_number.ToString();
					break;
				}
			}
		}

		void is_2048_found()
		{
			array<Button ^, 2> ^buttons = { { btn11, btn12, btn13, btn14 }, { btn21, btn22, btn23, btn24 }, { btn31, btn32, btn33, btn34 }, { btn41, btn42, btn43, btn44 } };
			bool is_won = false;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (buttons[i, j]->Text == "16"){
						is_won = true;
						break;
					}
				}
			}
			if (is_won){
				MessageBox::Show("You Won");
				btnLeft->Enabled = false;
				btnRight->Enabled = false;
				btnUp->Enabled = false;
				btnDown->Enabled = false;
				try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					//EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					int dum_max_score = max(convert_string_to_int(lbl_Score_Value->Text), convert_string_to_int(lblMax_Score_Value->Text));
					//MessageBox::Show(dum_max_score.ToString());
					String ^ Sql = "UPDATE 2048_Game SET [Max_Score] = " + dum_max_score + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteScalar();
					con->Close();
				}
				catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				}
				return;
			}

		}
	private: System::Void btnLeft_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 Move_Left();
				 is_2048_found();
	}
	private: System::Void btnDown_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Down();
				 is_2048_found();

	}
	private: System::Void btnRight_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Right();
				 is_2048_found();
	}
	private: System::Void btnUp_Click(System::Object^  sender, System::EventArgs^  e) {
				 Move_Up();
				 is_2048_found();
	}
	private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 Begin();
	}
};
}
