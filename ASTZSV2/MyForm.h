#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
using namespace std;
extern int iuser[4];
extern string suser[5], connection;
#pragma once

namespace ASTZSV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox2;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private:

	public: System::Windows::Forms::ComboBox^  comboBox2;
	private:

	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(21, 58);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(69, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"new user";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(96, 58);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(43, 17);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"scp";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 13);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Имя";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(70, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Фамилия";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(68, 39);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Отчество";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(68, 65);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 68);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Курс";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(70, 32);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"С/Б";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Группа";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(12, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(176, 175);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Проверить соединение";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(68, 91);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 21);
			this->comboBox2->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Отделение";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(68, 118);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Location = System::Drawing::Point(12, 262);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(176, 119);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(68, 91);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 7;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 6;
			this->label12->Text = L"password";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(68, 65);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"user name";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(68, 39);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"port";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(68, 13);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"datasource";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(199, 119);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->checkBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ASTZS";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void myform1load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void myform2load(System::Object^  sender, System::EventArgs^  e);	
#pragma endregion
	private: System::Void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (checkBox1->Checked == true && checkBox2->Checked==false)
				 {
					 groupBox1->Visible = true;
					 groupBox2->Visible = false;
					 ClientSize = System::Drawing::Size(199, 290);
					 button1->Location = System::Drawing::Point(12, 262);
				 }
				 else if (checkBox1->Checked == true && checkBox2->Checked == true)
				 {
					 groupBox1->Visible = true;
					 groupBox2->Visible = true;
					 ClientSize = System::Drawing::Size(199, 418);
					 groupBox1->Location = System::Drawing::Point(12, 81);
					 groupBox2->Location = System::Drawing::Point(12, 262);
					 button1->Location = System::Drawing::Point(12, 387);
				 }
				 else if (checkBox1->Checked == false && checkBox2->Checked == false)
				 {
					 button1->Location = System::Drawing::Point(12, 81);
					 ClientSize = System::Drawing::Size(199, 119);
					 groupBox1->Visible = false;
					 groupBox2->Visible = false;
				 }
				 else if(checkBox1->Checked == false && checkBox2->Checked == true)
				 {
					 groupBox1->Visible = false;
					 groupBox2->Visible = true;
					 button1->Location = System::Drawing::Point(12, 206);
					 ClientSize = System::Drawing::Size(199, 243);
					 groupBox2->Location = System::Drawing::Point(12, 81);
				 }
	}
    private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox1->Checked == true && checkBox2->Checked == false)
			 {
				 groupBox1->Visible = true;
				 groupBox2->Visible = false;
				 ClientSize = System::Drawing::Size(199, 290);
				 button1->Location = System::Drawing::Point(12, 262);
			 }
			 else if (checkBox1->Checked == true && checkBox2->Checked == true)
			 {
				 groupBox1->Visible = true;
				 groupBox2->Visible = true;
				 ClientSize = System::Drawing::Size(199, 418);
				 groupBox1->Location = System::Drawing::Point(12, 81);
				 groupBox2->Location = System::Drawing::Point(12, 262);
				 button1->Location = System::Drawing::Point(12, 387);
			 }
			 else if (checkBox1->Checked == false && checkBox2->Checked == false)
			 {
				 button1->Location = System::Drawing::Point(12, 81);
				 ClientSize = System::Drawing::Size(199, 119);
				 groupBox1->Visible = false;
				 groupBox2->Visible = false;
			 }
			 else if (checkBox1->Checked == false && checkBox2->Checked == true)
			 {
				 groupBox1->Visible = false;
				 groupBox2->Visible = true;
				 button1->Location = System::Drawing::Point(12, 206);
				 ClientSize = System::Drawing::Size(199, 243);
				 groupBox2->Location = System::Drawing::Point(12, 81);
			 }
}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int conop = 0;
					 if (textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "")
					 { MessageBox::Show("Все поля должны быть заполнены!"); conop = 1;}
					 else{
						 for (int i = 0; i < textBox10->Text->Length; i++)
						 {
							 wchar_t j = textBox10->Text[i];
							 if (j != '0' && j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6' && j != '7' && j != '8' && j != '9')
							 {
								 conop = 1;
							 }
						 }if (conop == 1){MessageBox::Show("Поле 'port' должно содержать только цифры!");}
					 }
					 if (conop != 1){
						 string ds, port, un, pw;
						 MarshalString(textBox9->Text, ds);
						 MarshalString(textBox10->Text, port);
						 MarshalString(textBox11->Text, un);
						 MarshalString(textBox12->Text, pw);
						 connection = "datasource='" + ds + "';port='" + port + "';username='" + un + "';password='" + pw + "';";
					 }
	
				 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 if (conop != 1){
				 try{
					 conDB->Open();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); conop = 1; }
				 conDB->Close();
			 }
			 if (conop != 1){

				 MySqlDataReader^ Reader;
				 int flag = 0;
				 if (checkBox1->Checked == true)
				 {
					 if (textBox3->Text == "" || textBox4->Text == "" ||
						 textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || comboBox1->Text=="" || comboBox2->Text=="")
					 {
						 flag = 1; MessageBox::Show("Все поля должны быть заполнены!");
					 }
					 else
					 {
						 for (int i = 0; i < textBox7->TextLength; i++)
						 {
							 wchar_t j = Convert::ToChar(textBox7->Text[i]);
							 if (j != '0' && j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6' && j != '7' && j != '8' && j != '9')
							 {
								 flag = 1;
							 }
						 }
						 for (int i = 0; i < textBox6->TextLength; i++)
						 {
							 wchar_t j = Convert::ToChar(textBox6->Text[i]);
							 if (j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6')
							 {
								 flag = 1;
							 }
						 }
						 if (flag != 0){ MessageBox::Show("Поля 'course' и 'nsc' должны содержать только цифры!"); }
						 if (textBox6->TextLength>1){ flag = 1; MessageBox::Show("поле 'course' принимает значение от 1 до 6!"); }
					 }
					 if (flag != 1)
					 {
						 MySqlCommand^ registrate_new_user = gcnew MySqlCommand("INSERT INTO `astzs_db`.`users` (`use`, `course`, `nsc`, `first name`, `last name`, `patronymic`, `group`, `Mode of study`) VALUES('0', '" + Convert::ToInt32(textBox6->Text) + "', '" + Convert::ToInt32(textBox7->Text) + "', '" + textBox3->Text + "', '" + textBox4->Text + "', '" + textBox5->Text + "', '" + comboBox2->SelectedItem + "', '" + comboBox1->SelectedItem + "');", conDB);
						 conDB->Open();
						 try
						 {
							 registrate_new_user->ExecuteNonQuery();
						 }
						 catch (Exception^ex){ MessageBox::Show(ex->Message); flag = 1; }
						 conDB->Close();
						 if (flag != 1){ checkBox1->Checked = false; }
					 }

				 }

				 if (checkBox1->Checked == false)
				 {
					 if (textBox4->Text == "admin" && textBox7->Text == "")
					 {
						 myform2load(sender, e);
						 flag = 1;
					 }
					 if (flag != 1)
					 {
						 if (textBox4->Text == "" || textBox7->Text == ""){ flag = 1; MessageBox::Show("Все поля должны быть заполнены!"); }
						 else
						 {
							 MySqlCommand^ login_user = gcnew MySqlCommand("select * from `astzs_db`.`users` where `last name`='" + textBox4->Text + "' && `nsc`='" + textBox7->Text + "';", conDB);
							 conDB->Open();
							 try{
								 Reader = login_user->ExecuteReader();
								 while (Reader->Read())
								 {
									 for (int i = 0; i < 4; i++)
									 {
										 iuser[i] = Reader->GetInt32(i);
									 }
									 for (int i = 0, j = 4; i < 5; i++, j++)
									 {
										 MarshalString(Reader->GetValue(j)->ToString(), suser[i]);

									 }
								 }
							 }
							 catch (Exception^ex){ MessageBox::Show(ex->Message); flag = 1; }
							 conDB->Close();
							 if (iuser[0] != 0 && iuser[1] == 1){ MessageBox::Show("Пользователь уже находится в сети!"); flag = 1; }
							 else if (iuser[0] != 0)
							 {
								 MySqlCommand^ login_user_use = gcnew MySqlCommand("UPDATE `astzs_db`.`users` SET `use`='0' WHERE `id`='" + iuser[0] + "';", conDB);
								 conDB->Open();
								 try{
									 login_user_use->ExecuteNonQuery();
								 }
								 catch (Exception^ex){ MessageBox::Show(ex->Message); flag = 1; }
								 conDB->Close();
							 }
							 else { MessageBox::Show("Неправильная пара Фамилия/шифр"); flag = 1; }
						 }
						 if (flag != 1)
						 {
							 myform1load(sender, e);
						 }
					 }
				 }
			 }
}
    private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 int conop = 0;
				 ifstream f("logsql.txt");
				 for (int i = 0; i < 4; i++)
				 {
					 string str;
					 f >> str;
					 switch (i)
					 {
					 case 0:{textBox9->Text = gcnew String(str.c_str()); }break;
					 case 1:{textBox10->Text = gcnew String(str.c_str()); }break;
					 case 2:{textBox11->Text = gcnew String(str.c_str()); }break;
					 case 3:{textBox12->Text = gcnew String(str.c_str()); }break;
					 }
				 }
			 comboBox1->Items->Clear();
			 comboBox1->Items->Add("очное");
			 comboBox1->Items->Add("очно-заочное");
			 comboBox1->Items->Add("заочное");
			 comboBox2->Items->Clear();
 
			 if (textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "")
			 {
				 MessageBox::Show("Все поля должны быть заполнены!"); conop = 1;
			 }
			 else{
				 for (int i = 0; i < textBox10->Text->Length; i++)
				 {
					 wchar_t j = textBox10->Text[i];
					 if (j != '0' && j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6' && j != '7' && j != '8' && j != '9')
					 {
						 conop = 1;
					 }
				 }if (conop == 1){ MessageBox::Show("Поле 'port' должно содержать только цифры!"); }
			 }
			 if (conop != 1){
			 string ds, port, un, pw;
			 MarshalString(textBox9->Text, ds);
			 MarshalString(textBox10->Text, port);
			 MarshalString(textBox11->Text, un);
			 MarshalString(textBox12->Text, pw);
			 connection = "datasource='" + ds + "';port='" + port + "';username='" + un + "';password='" + pw + "';";
			 }
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 if (conop != 1){
				 try{
					 conDB->Open();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); conop = 1; }
				 conDB->Close();
			 }
			 if (conop != 1){
				 MySqlDataReader^ Reader;
				 MySqlCommand^ get_group = gcnew MySqlCommand("select * from `astzs_db`.`group`;", conDB);
				 conDB->Open();
				 try{
					 Reader = get_group->ExecuteReader();
					 while (Reader->Read())
					 {
						 comboBox2->Items->Add(Reader->GetValue(1));
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
			 }
}
    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int conop = 0;
			 comboBox2->Items->Clear();

			 if (textBox9->Text == "" || textBox10->Text == "" || textBox11->Text == "" || textBox12->Text == "")
			 {
				 MessageBox::Show("Все поля должны быть заполнены!"); conop = 1;
			 }
			 else{
				 for (int i = 0; i < textBox10->Text->Length; i++)
				 {
					 wchar_t j = textBox10->Text[i];
					 if (j != '0' && j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6' && j != '7' && j != '8' && j != '9')
					 {
						 conop = 1;
					 }
				 }if (conop == 1){ MessageBox::Show("Поле 'port' должно содержать только цифры!"); }
			 }
			 if (conop != 1){
				 string ds, port, un, pw;
				 MarshalString(textBox9->Text, ds);
				 MarshalString(textBox10->Text, port);
				 MarshalString(textBox11->Text, un);
				 MarshalString(textBox12->Text, pw);
				 connection = "datasource='" + ds + "';port='" + port + "';username='" + un + "';password='" + pw + "';";
			 }
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 if (conop != 1){
				 try{
					 conDB->Open();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); conop = 1; }
				 conDB->Close();
			 }
			 if (conop != 1){
				 MySqlDataReader^ Reader;
				 MySqlCommand^ get_group = gcnew MySqlCommand("select * from `astzs_db`.`group`;", conDB);
				 conDB->Open();
				 try{
					 Reader = get_group->ExecuteReader();
					 while (Reader->Read())
					 {
						 comboBox2->Items->Add(Reader->GetValue(1));
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
			 }

}
};
}
