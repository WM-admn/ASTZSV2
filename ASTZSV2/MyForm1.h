#include <string>
#include <msclr\marshal_cppstd.h>
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
#include"MyForm.h"
using namespace std;
extern int iuser[4], itest[8], questionid[1000][2], iquestion[6], questioncount, min, sec, pbsec, flag, countquestion, flaginsert, QCOUNT, attemps, idresults, valuation;
extern string suser[5], stest[3], squestion[14], connection;
extern double result;

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
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		MyForm1(MyForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::Button^  button4;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: MyForm^ parentForm;


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  time;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label8;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->time = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(544, 87);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(193, 129);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"User info";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Location = System::Drawing::Point(171, 330);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(347, 320);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Сhoice test";
			this->groupBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(130, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Поехали!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Test";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(61, 46);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(221, 199);
			this->listBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(61, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(221, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Category";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Начать тестирование";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(837, 203);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 233);
			this->textBox1->TabIndex = 3;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->progressBar1);
			this->groupBox3->Controls->Add(this->time);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Location = System::Drawing::Point(824, 73);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(740, 690);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox8);
			this->groupBox5->Controls->Add(this->checkBox7);
			this->groupBox5->Controls->Add(this->checkBox6);
			this->groupBox5->Controls->Add(this->checkBox5);
			this->groupBox5->Controls->Add(this->checkBox9);
			this->groupBox5->Controls->Add(this->checkBox10);
			this->groupBox5->Controls->Add(this->checkBox12);
			this->groupBox5->Controls->Add(this->checkBox11);
			this->groupBox5->Location = System::Drawing::Point(7, 160);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(726, 486);
			this->groupBox5->TabIndex = 28;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Варианты ответов";
			// 
			// checkBox8
			// 
			this->checkBox8->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox8->Location = System::Drawing::Point(6, 383);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(714, 69);
			this->checkBox8->TabIndex = 3;
			this->checkBox8->Text = L"checkBox8";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox7->Location = System::Drawing::Point(6, 260);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(714, 69);
			this->checkBox7->TabIndex = 2;
			this->checkBox7->Text = L"checkBox7";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox6->Location = System::Drawing::Point(6, 139);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(714, 69);
			this->checkBox6->TabIndex = 1;
			this->checkBox6->Text = L"checkBox6";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->Location = System::Drawing::Point(6, 19);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(714, 69);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox9->Location = System::Drawing::Point(6, 319);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(714, 69);
			this->checkBox9->TabIndex = 4;
			this->checkBox9->Text = L"checkBox9";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox10->Location = System::Drawing::Point(6, 394);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(714, 69);
			this->checkBox10->TabIndex = 5;
			this->checkBox10->Text = L"checkBox10";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox12->Location = System::Drawing::Point(6, 415);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(714, 50);
			this->checkBox12->TabIndex = 7;
			this->checkBox12->Text = L"checkBox12";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox11->Location = System::Drawing::Point(6, 359);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(714, 50);
			this->checkBox11->TabIndex = 6;
			this->checkBox11->Text = L"checkBox11";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 653);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(726, 23);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Ок, далее";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->Location = System::Drawing::Point(373, 406);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(34, 240);
			this->checkBox4->TabIndex = 26;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->Location = System::Drawing::Point(200, 406);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(34, 240);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Location = System::Drawing::Point(7, 44);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(726, 110);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Вопрос";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(7, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(713, 79);
			this->label11->TabIndex = 0;
			this->label11->Text = L"label11";
			// 
			// pictureBox4
			// 
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->ImageLocation = L"";
			this->pictureBox4->Location = System::Drawing::Point(413, 406);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(320, 240);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.ErrorImage")));
			this->pictureBox3->ImageLocation = L"";
			this->pictureBox3->Location = System::Drawing::Point(240, 406);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(320, 240);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"";
			this->pictureBox1->Location = System::Drawing::Point(214, 160);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(320, 240);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(6, 19);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(554, 18);
			this->progressBar1->TabIndex = 17;
			// 
			// time
			// 
			this->time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->time->ForeColor = System::Drawing::Color::DarkRed;
			this->time->Location = System::Drawing::Point(566, 19);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(167, 18);
			this->time->TabIndex = 16;
			this->time->Text = L"time";
			this->time->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->Location = System::Drawing::Point(373, 160);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(34, 240);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"";
			this->pictureBox2->Location = System::Drawing::Point(413, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(320, 240);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->Location = System::Drawing::Point(200, 160);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(34, 240);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Изменить учетную запись";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->button5);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Controls->Add(this->comboBox2);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Controls->Add(this->textBox5);
			this->groupBox6->Controls->Add(this->textBox4);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Controls->Add(this->label16);
			this->groupBox6->Controls->Add(this->label17);
			this->groupBox6->Controls->Add(this->label18);
			this->groupBox6->Location = System::Drawing::Point(276, 37);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(202, 234);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"User info";
			this->groupBox6->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(103, 207);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Отмена";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 207);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Обновить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(71, 124);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 22;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(71, 97);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(71, 177);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(71, 151);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(71, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(71, 45);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(71, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 180);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Номер с-б";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 154);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Курс";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 127);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Отделение";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 100);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Группа";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 74);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Отчество";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 48);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Фамилия";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 22);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Имя";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1576, 824);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ASTZS-user";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void random(void);
private: System::Void MarshalString(String ^ s, string& os) {
			 using namespace Runtime::InteropServices;
			 const char* chars =
				 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			 os = chars;
			 Marshal::FreeHGlobal(IntPtr((void*)chars));
}

private: System::String^ endline(String^ s)
{
			 String^ str = "";
			 for (int i = 0; i < s->Length; i++)
			 {
				 if (s[i] == '$')
				 {
					 str += "\n";
				 }
				 else
				 {
					 str += s[i];
				 }
			 }
			 return str;
}

	
	
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
			 ClientSize = System::Drawing::Size(221, 208);
			 groupBox1->Location = System::Drawing::Point(12, 12);
			 groupBox2->Location = System::Drawing::Point(12, 12);
			 groupBox3->Location = System::Drawing::Point(12, 12);
			 groupBox6->Location = System::Drawing::Point(12, 12);	 
				 label1->Text = "ID - " + iuser[0];
				 label2->Text = "Имя - " + gcnew String(suser[0].c_str());
				 label3->Text = "Фамилия - " + gcnew String(suser[1].c_str());
				 label4->Text = "Отчество - " + gcnew String(suser[2].c_str());
				 label5->Text = "Группа - " + gcnew String(suser[3].c_str());
				 label6->Text = "Отделение - " + gcnew String(suser[4].c_str());
				 label7->Text = "Курс - " + iuser[2];
				 label8->Text = "С/Б - " + iuser[3];
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Items->Clear();
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ get_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
			 conDB->Open();
			 try{
				 Reader = get_category->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox1->Items->Add(Reader->GetValue(1));
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message);}
			 conDB->Close();
			 ClientSize = System::Drawing::Size(372, 341);
			 button1->Visible = false;
			 button4->Visible = false;
			 groupBox1->Visible = false;
			 groupBox2->Visible = true;
			 
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ get_test = gcnew MySqlCommand("select * from `astzs_db`.`test` where `category`='"+comboBox1->SelectedItem+"';", conDB);
			 conDB->Open();
			 try{
				 Reader = get_test->ExecuteReader();
				 while (Reader->Read())
				 {
					 listBox1->Items->Add(Reader->GetValue(7));
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedItems->Count != 0)
			 {
				 String^ con = gcnew String(connection.c_str());
				 String^ ids;
				 String^ getids;
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;
				 MySqlCommand^ get_test_s2 = gcnew MySqlCommand("select * from `astzs_db`.`test` where `category`='" + comboBox1->SelectedItem + "' && `name`='" + listBox1->SelectedItem + "';", conDB);
				 conDB->Open();
				 try{
					 Reader = get_test_s2->ExecuteReader();
					 while (Reader->Read())
					 {
						 for (int i = 0; i < 7; i++)
						 {
							 itest[i] = Reader->GetInt32(i);
						 }
						 itest[7] = Reader->GetInt32(10);
						 for (int i = 0, j = 7; i < 3; i++)
						 {

							 MarshalString(Reader->GetValue(j)->ToString(), stest[i]);
							 j++;
						 }
						 ids = Reader->GetValue(9)->ToString();
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();

				 flaginsert = 0;
				 attemps = 0;
				 valuation = 0;
				 MySqlCommand^  attempts = gcnew MySqlCommand("select * from `astzs_db`.`results` where `user_id`='" + iuser[0] + "' && `test_id`='" + itest[0] + "';", conDB);
				 conDB->Open();
				 try{
					 Reader = attempts->ExecuteReader();
					 while (Reader->Read())
					 {
						 flaginsert++;
						 idresults = Reader->GetInt32(0);
						 attemps = Reader->GetInt32(3);
						 valuation = Reader->GetInt32(10);
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();

				 if (attemps < itest[7])
				 {
				 for (int i = 0; i < ids->Length; i++)
				 {
					 if (ids[i] != ' ' && i == 0){ getids = "`category`='" + comboBox1->SelectedItem + "' && `sectionid`='" + ids[i]; }
					 if (ids[i] == ' '&& i != 0 && i != ids->Length - 1){ getids += "' || `category`='" + comboBox1->SelectedItem + "' && `sectionid`='"; }
					 if (ids[i] != ' '&& i != 0 && i != ids->Length - 1){ getids += ids[i]; }
					 if (ids[i] != ' '&& i == ids->Length - 1){ getids += ids[i] + "';"; }
				 }
				 MessageBox::Show(getids);
				 questioncount = 0;
				 for (int i = 0; i < 1000; i++)
				 {
					 questionid[i][0] = 0;
					 questionid[i][1] = 0;
				 }
				 MySqlCommand^ get_test_s3 = gcnew MySqlCommand("select * from `astzs_db`.`question` where" + getids, conDB);
				 getids = "select * from `astzs_db`.`question` where" + getids;
				 MessageBox::Show(getids);
				 conDB->Open();
				 try{
					 Reader = get_test_s3->ExecuteReader();
					 while (Reader->Read())
					 {
						 questionid[questioncount][0] = Reader->GetInt32(0);
						 questioncount++;
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 if (questioncount < itest[6]){ MessageBox::Show("В тесте указано больше вопросов чем есть в базе!"); }
				 else{
					 QCOUNT = 0;
					 ClientSize = System::Drawing::Size(765, 715);
					 min = itest[1];
					 countquestion = questioncount;
					 pbsec = min * 60;
					 progressBar1->Maximum = pbsec;
					 progressBar1->Value = 0;
					 timer1->Start();
					 if (min > 9){time->Text = "Времени осталось: " + min + ":00"; }
					 else { time->Text = "Времени осталось: 0" + min + ":00"; }		 
					 groupBox2->Visible = false;
					 groupBox3->Visible = true;
					 sortirovka();
				 }
				 }
				 else { MessageBox::Show("Вы уже прошли тест!");}
				 }			
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if (sec > 0)
				 {
					 progressBar1->Value++;
					 sec--;
					 if (sec > 9 && min>9){time->Text ="Времени осталось: "+ min + ":" + sec;}
					 else if (sec > 9 && min<=9){ time->Text = "Времени осталось: 0" + min + ":" + sec; }
					 else if (sec <= 9 && min<=9){ time->Text = "Времени осталось: 0" + min + ":0" + sec; }
					 else if (sec <= 9 && min>9){ time->Text = "Времени осталось: " + min + ":0" + sec; }
				 }
				 else if (sec == 0 && min > 0)
				 {
					 progressBar1->Value++;
					 sec = 59;
					 min--;
					 if (min > 9){ time->Text = "Времени осталось: " + min + ":" + sec; }
					 else { time->Text ="Времени осталось: 0"+min + ":" + sec; }
				 }
				 else if (sec == 0 && min == 0)
				 {
					 timer1->Stop();
					 results();
				 }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 double temp,temp1,temp2;
			 temp = 0;
			 temp1 = Convert::ToDouble(iquestion[3]);
			 temp2 = 1 / temp1;
			 if (checkBox1->Checked == true){
				 if (iquestion[3] >= 1){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox2->Checked == true){
				 if (iquestion[3] >= 2){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox3->Checked == true){
				 if (iquestion[3] >= 3){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox4->Checked == true){
				 if (iquestion[3] >= 4){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox5->Checked == true){
				 if (iquestion[3] >= 1){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox6->Checked == true){
				 if (iquestion[3] >= 2){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox7->Checked == true){
				 if (iquestion[3] >= 3){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox8->Checked == true){
				 if (iquestion[3] >= 4){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox9->Checked == true){
				 if (iquestion[3] >= 5){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox10->Checked == true){
				 if (iquestion[3] >= 6){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox11->Checked == true){
				 if (iquestion[3] >= 7){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (checkBox12->Checked == true){
				 if (iquestion[3] >= 8){ temp += temp2; }
				 else { temp -= temp2; }
			 }
			 if (temp + 0.1 >= 1){ temp = 1;}
			 if (temp < 0){ temp = 0; }
			
			 QCOUNT++;
			 result += temp;
			 if (QCOUNT == itest[6]){
				 sec = 0;
				 timer1->Stop();
				 results();
			 }
			 else
			 {
				 sortirovka();
			 }
			 textBox1->Text += Convert::ToString(temp);
			 textBox1->Text += Environment::NewLine;
}
private: System::Void sortirovka(void)
{
			 checkBox1->Checked = false;
			 checkBox2->Checked = false;
			 checkBox3->Checked = false;
			 checkBox4->Checked = false;
			 checkBox5->Checked = false;
			 checkBox6->Checked = false;
			 checkBox7->Checked = false;
			 checkBox8->Checked = false;
			 checkBox9->Checked = false;
			 checkBox10->Checked = false;
			 checkBox11->Checked = false;
			 checkBox12->Checked = false;
			 pictureBox1->Visible = false;
			 pictureBox2->Visible = false;
			 pictureBox3->Visible = false;
			 pictureBox4->Visible = false;
			 checkBox1->Visible = false;
			 checkBox2->Visible = false;
			 checkBox3->Visible = false;
			 checkBox4->Visible = false;
			 checkBox5->Visible = false;
			 checkBox6->Visible = false;
			 checkBox7->Visible = false;
			 checkBox8->Visible = false;
			 checkBox9->Visible = false;
			 checkBox10->Visible = false;
			 checkBox11->Visible = false;
			 checkBox12->Visible = false;
			 String^ endl;
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ get_question;
			 flag = 0;
			 random();
			 while (flag == 0)
			 {
				 int number = rand() % questioncount;
				 if (questionid[number][1] != 1 && countquestion != 0)
				 {
					 flag = 1; questionid[number][1] = 1;
					 countquestion--;
					 get_question = gcnew MySqlCommand("select * from `astzs_db`.`question` where `id`='" + questionid[number][0] + "';", conDB);
					 conDB->Open();
					 try{
						 Reader = get_question->ExecuteReader();
						 while (Reader->Read())
						 {
							 for (int i = 0; i < 6; i++)
							 {
								 iquestion[i] = Reader->GetInt32(i);
							 }
							 for (int i = 0, j = 6; i < 14; i++, j++)
							 {
								 MarshalString(Reader->GetValue(j)->ToString(), squestion[i]);
							 }
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); flag = 0; questionid[number][1] = 0; countquestion++; }
					 conDB->Close();
				 }
				 else if (countquestion == 0)
				 { 
					 MessageBox::Show("Ошибки или сбои! тест завершен!"); 
					 flag = 1;
					 timer1->Stop();
					 sec = 0; 
					 progressBar1->Value = 0;
					 ClientSize = System::Drawing::Size(372, 341);
					 groupBox3->Visible = false;
					 groupBox2->Visible = true;
					 
				 
				 }
			 }

//select image

			// String^ strr 
			 endl = gcnew String(squestion[0].c_str());
			// String^ strrr="";
			 label11->Text = endline(endl);





			 //label11->Text = strrr;
			 if (iquestion[2] == 1)
			 {
				 groupBox5->Visible = false;
				 pictureBox1->ImageLocation = gcnew String(squestion[1].c_str());
				 pictureBox2->ImageLocation = gcnew String(squestion[2].c_str());
				 pictureBox3->ImageLocation = gcnew String(squestion[3].c_str());
				 pictureBox4->ImageLocation = gcnew String(squestion[4].c_str());
				 int fl = 0, mass[4];
				 random();
				 for (int i = 0; i < 4; i++)
				 {
					 mass[i] = 0;
				 }
				 switch (iquestion[1])
				 {
				 case 2:{
							while (fl < 2)
							{
								int number = rand() % 2, ms[6];
								if (mass[number] != 1)
								{
									switch (number)
									{
									case 0:{ms[0] = 200; ms[1] = 160;  ms[2] = 240;  ms[3] = 160;  ms[4] = 320; ms[5] = 240; } break;
									case 1:{ms[0] = 200; ms[1] = 406;  ms[2] = 240;  ms[3] = 406;  ms[4] = 320; ms[5] = 240; }; break;
									}
									switch (fl)
									{
									case 0:{
											   checkBox1->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox1->Size = System::Drawing::Size(34, 240);
											   pictureBox1->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox1->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 1:{
											   checkBox2->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox2->Size = System::Drawing::Size(34, 240);
											   pictureBox2->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox2->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									}mass[number] = 1; fl++;
								}
							}
							checkBox1->Visible = true;
							checkBox2->Visible = true;
							pictureBox1->Visible = true;
							pictureBox2->Visible = true;
				 }break;
				 case 3:{					
							while (fl < 3)
							{
								int number = rand() % 3, ms[6];
								if (mass[number] != 1)
								{
									switch (number)
									{
									case 0:{ms[0] = 7; ms[1] = 160;  ms[2] = 47;  ms[3] = 160;  ms[4] = 320; ms[5] = 240; } break;
									case 1:{ms[0] = 373; ms[1] = 160;  ms[2] = 413;  ms[3] = 160;  ms[4] = 320; ms[5] = 240; }; break;
									case 2:{ms[0] = 200; ms[1] = 406;  ms[2] = 240;  ms[3] = 406;  ms[4] = 320; ms[5] = 240; }; break;
									}
									switch (fl)
									{
									case 0:{
											   checkBox1->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox1->Size = System::Drawing::Size(34, 240);
											   pictureBox1->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox1->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 1:{
											   checkBox2->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox2->Size = System::Drawing::Size(34, 240);
											   pictureBox2->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox2->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 2:{
											   checkBox3->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox3->Size = System::Drawing::Size(34, 240);
											   pictureBox3->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox3->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									}mass[number] = 1; fl++;
								}
							}
							checkBox1->Visible = true;
							checkBox2->Visible = true;
							checkBox3->Visible = true;
							pictureBox1->Visible = true;
							pictureBox2->Visible = true;
							pictureBox3->Visible = true;
				 }break;
				 case 4:{
							while (fl < 4)
							{
								int number = rand() % 4, ms[6];
								if (mass[number] != 1)
								{
									switch (number)
									{
									case 0:{ms[0] = 7; ms[1] = 160;  ms[2] = 47;  ms[3] = 160;  ms[4] = 320; ms[5] = 240; } break;
									case 1:{ms[0] = 373; ms[1] = 160;  ms[2] = 413;  ms[3] = 160;  ms[4] = 320; ms[5] = 240; }; break;
									case 2:{ms[0] = 7; ms[1] = 406;  ms[2] = 47;  ms[3] = 406;  ms[4] = 320; ms[5] = 240; }; break;
									case 3:{ms[0] = 373; ms[1] = 406;  ms[2] = 413;  ms[3] = 406;  ms[4] = 320; ms[5] = 240; }; break;
									}
									switch (fl)
									{
									case 0:{
											   checkBox1->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox1->Size = System::Drawing::Size(34, 240);
											   pictureBox1->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox1->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 1:{
											   checkBox2->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox2->Size = System::Drawing::Size(34, 240);
											   pictureBox2->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox2->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 2:{
											   checkBox3->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox3->Size = System::Drawing::Size(34, 240);
											   pictureBox3->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox3->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									case 3:{
											   checkBox4->Location = System::Drawing::Point(ms[0], ms[1]);
											   checkBox4->Size = System::Drawing::Size(34, 240);
											   pictureBox4->Location = System::Drawing::Point(ms[2], ms[3]);
											   pictureBox4->Size = System::Drawing::Size(ms[4], ms[5]);
									}break;
									}mass[number] = 1; fl++;
								}
							}
							checkBox1->Visible = true;
							checkBox2->Visible = true;
							checkBox3->Visible = true;
							checkBox4->Visible = true;
							pictureBox1->Visible = true;
							pictureBox2->Visible = true;
							pictureBox3->Visible = true;
							pictureBox4->Visible = true;
				 }break;
				 }
			 }

//button

			 else if (iquestion[2] == 0)
			 {
				 endl = gcnew String(squestion[5].c_str());
				 checkBox5->Text = endline(endl);
				 endl = gcnew String(squestion[6].c_str());
				 checkBox6->Text = endline(endl);
				 endl = gcnew String(squestion[7].c_str());
					 checkBox7->Text = endline(endl);
					 endl = gcnew String(squestion[8].c_str());
					 checkBox8->Text = endline(endl);
					 endl = gcnew String(squestion[9].c_str());
					 checkBox9->Text = endline(endl);
					 endl = gcnew String(squestion[10].c_str());
					 checkBox10->Text = endline(endl);
					 endl = gcnew String(squestion[11].c_str());
					 checkBox11->Text = endline(endl);
					 endl = gcnew String(squestion[12].c_str());
					 checkBox12->Text = endline(endl);
					 
				 groupBox5->Visible = true;

//no image

				 if (iquestion[1] == 0)
				 {

					 groupBox5->Location = System::Drawing::Point(7, 160);
					 groupBox5->Size = System::Drawing::Size(726, 486);
					 checkBox5->Visible = true;
					 checkBox6->Visible = true;
					 checkBox7->Visible = true;
					 checkBox8->Visible = true;
					 int fl = 0, mass[8];
					 random();
					 for (int i = 0; i < 8; i++)
					 {
						 mass[i] = 0;
					 }
					 switch (iquestion[4])
					 {
					 case 4:
					 {
					 while (fl < 4)
					 {
						 int number = rand() % 4, ms[2];
						 if (mass[number] != 1)
						 {
							 switch (number)
							 {
							 case 0:{ms[0] = 6; ms[1] = 19; } break;
							 case 1:{ms[0] = 6; ms[1] = 139; }; break;
							 case 2:{ms[0] = 6; ms[1] = 260; }; break;
							 case 3:{ms[0] = 6; ms[1] = 383; }; break;
							 }
							 switch (fl)
							 {
							 case 0:{
										checkBox5->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox5->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 1:{
										checkBox6->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox6->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 2:{
										checkBox7->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox7->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 3:{
										checkBox8->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox8->Size = System::Drawing::Size(714, 69);
							 }break;
							 }mass[number] = 1; fl++;
						 }
					 }}break;
					 case 6:
					 {
					 while (fl < 6)
					 {
						 int number = rand() % 6, ms[2];
						 if (mass[number] != 1)
						 {
							 switch (number)
							 {
							 case 0:{ms[0] = 6; ms[1] = 19; } break;
							 case 1:{ms[0] = 6; ms[1] = 94; }; break;
							 case 2:{ms[0] = 6; ms[1] = 169; }; break;
							 case 3:{ms[0] = 6; ms[1] = 244; }; break;
							 case 4:{ms[0] = 6; ms[1] = 319; }; break;
							 case 5:{ms[0] = 6; ms[1] = 394; }; break;
							 }
							 switch (fl)
							 {
							 case 0:{
										checkBox5->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox5->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 1:{
										checkBox6->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox6->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 2:{
										checkBox7->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox7->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 3:{
										checkBox8->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox8->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 4:{
										checkBox9->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox9->Size = System::Drawing::Size(714, 69);
							 }break;
							 case 5:{
										checkBox10->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox10->Size = System::Drawing::Size(714, 69);
							 }break;
							 }mass[number] = 1; fl++;
						 }
					 }
					 checkBox9->Visible = true;
					 checkBox10->Visible = true;
					 }break;
					 case 8:
					 {
					 while (fl < 8)
					 {
						 int number = rand() % 8, ms[2];
						 if (mass[number] != 1)
						 {
							 switch (number)
							 {
							 case 0:{ms[0] = 6; ms[1] = 19; } break;
							 case 1:{ms[0] = 6; ms[1] = 76; }; break;
							 case 2:{ms[0] = 6; ms[1] = 133; }; break;
							 case 3:{ms[0] = 6; ms[1] = 190; }; break;
							 case 4:{ms[0] = 6; ms[1] = 247; }; break;
							 case 5:{ms[0] = 6; ms[1] = 303; }; break;
							 case 6:{ms[0] = 6; ms[1] = 359; }; break;
							 case 7:{ms[0] = 6; ms[1] = 415; }; break;

							 }
							 switch (fl)
							 {
							 case 0:{
										checkBox5->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox5->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 1:{
										checkBox6->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox6->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 2:{
										checkBox7->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox7->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 3:{
										checkBox8->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox8->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 4:{
										checkBox9->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox9->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 5:{
										checkBox10->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox10->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 6:{
										checkBox11->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox11->Size = System::Drawing::Size(714, 51);
							 }break;
							 case 7:{
										checkBox12->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox12->Size = System::Drawing::Size(714, 51);
							 }break;
							 }mass[number] = 1; fl++;
						 }
					 }
					 checkBox9->Visible = true;
					 checkBox10->Visible = true;
					 checkBox11->Visible = true;
					 checkBox12->Visible = true;
					 }break;
					 }
				 }

//image

				 else if (iquestion[1] == 1)
				 {
					 pictureBox1->ImageLocation = gcnew String(squestion[1].c_str());
					 int fl = 0, mass[6];
					 random();
					 for (int i = 0; i < 6; i++)
					 {
						 mass[i] = 0;
					 }
					 pictureBox1->Location = System::Drawing::Point(214, 160);
					 pictureBox1->Size = System::Drawing::Size(320, 240);
					 groupBox5->Location = System::Drawing::Point(7, 399);
					 groupBox5->Size = System::Drawing::Size(726, 247);
					 checkBox5->Visible = true;
					 checkBox6->Visible = true;
					 checkBox7->Visible = true;
					 checkBox8->Visible = true;
					 pictureBox1->Visible = true;
					 switch (iquestion[4])
					 {
					 case 4:{
								while (fl < 4)
								{
									int number = rand() % 4, ms[4];
									if (mass[number] != 1)
									{
										switch (number)
										{
										case 0:{ms[0] = 6; ms[1] = 19;  ms[2] = 714;  ms[3] = 51; } break;
										case 1:{ms[0] = 6; ms[1] = 76;  ms[2] = 714;  ms[3] = 51; }; break;
										case 2:{ms[0] = 6; ms[1] = 133;  ms[2] = 714;  ms[3] = 51; }; break;
										case 3:{ms[0] = 6; ms[1] = 190;  ms[2] = 714;  ms[3] = 51; }; break;
										}
										switch (fl)
										{
										case 0:{
												   checkBox5->Location = System::Drawing::Point(ms[0], ms[1]);
												   checkBox5->Size = System::Drawing::Size(714, 51);
										}break;
										case 1:{
												   checkBox6->Location = System::Drawing::Point(ms[0], ms[1]);
												   checkBox6->Size = System::Drawing::Size(714, 51);
										}break;
										case 2:{
												   checkBox7->Location = System::Drawing::Point(ms[0], ms[1]);
												   checkBox7->Size = System::Drawing::Size(714, 51);
										}break;
										case 3:{
												   checkBox8->Location = System::Drawing::Point(ms[0], ms[1]);
												   checkBox8->Size = System::Drawing::Size(714, 51);
										}break;
										}mass[number] = 1; fl++;
									}
								}
					 }break;
					 case 6:
					 { 
					 while (fl < 6)
					 {
						 int number = rand() % 6, ms[4];
						 if (mass[number] != 1)
						 {
							 switch (number)
							 {
							 case 0:{ms[0] = 6; ms[1] = 19;  ms[2] = 714;  ms[3] = 32; } break;
							 case 1:{ms[0] = 6; ms[1] = 57;  ms[2] = 714;  ms[3] = 32; }; break;
							 case 2:{ms[0] = 6; ms[1] = 95;  ms[2] = 714;  ms[3] = 32; }; break;
							 case 3:{ms[0] = 6; ms[1] = 133;  ms[2] = 714;  ms[3] = 32; }; break;
							 case 4:{ms[0] = 6; ms[1] = 171;  ms[2] = 714;  ms[3] = 32; }; break;
							 case 5:{ms[0] = 6; ms[1] = 209;  ms[2] = 714;  ms[3] = 32; }; break;

							 }
							 switch (fl)
							 {
							 case 0:{
										checkBox5->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox5->Size = System::Drawing::Size(714, 32);
							 }break;
							 case 1:{
										checkBox6->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox6->Size = System::Drawing::Size(714, 32);
							 }break;
							 case 2:{
										checkBox7->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox7->Size = System::Drawing::Size(714, 32);
							 }break;
							 case 3:{
										checkBox8->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox8->Size = System::Drawing::Size(714, 32);
							 }break;
							 case 4:{
										checkBox9->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox9->Size = System::Drawing::Size(714, 32);
							 }break;
							 case 5:{
										checkBox10->Location = System::Drawing::Point(ms[0], ms[1]);
										checkBox10->Size = System::Drawing::Size(714, 32);
							 }break;
							 }mass[number] = 1; fl++;
						 }
					 }
					 checkBox9->Visible = true;
					 checkBox10->Visible = true;
					 }break;
					 }
				 }
			 }
}
private: System::Void results(void){
			 int valuation_temp;
			 attemps++;
			// MessageBox::Show("" + result + "");
			 if (result < itest[3]){ valuation_temp = 2; }
			 if (result >= itest[3]){ valuation_temp = 3; }
			 if (itest[2] == 1){
				 if (result >= itest[4]){ valuation_temp = 4; }
				 if (result >= itest[5]){ valuation_temp = 5; }
			 }
			 MessageBox::Show(""+valuation_temp+"");

			 if (valuation_temp>valuation){ valuation = valuation_temp; }
			
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlCommand^ update_results = gcnew MySqlCommand("UPDATE `astzs_db`.`results` SET `attempts`='" + attemps + "', `valuation`='" + valuation + "' WHERE `id`='" + idresults + "';", conDB);
			 MySqlCommand^ insert_results = gcnew MySqlCommand("INSERT INTO `astzs_db`.`results` (`test_id`, `user_id`, `attempts`, `last name`, `group`, `Mode of study`, `kurse`, `category`, `test name`, `valuation`) VALUES ('" + itest[0] + "', '" + iuser[0] + "', '" + attemps + "', '" + gcnew String(suser[1].c_str()) + "', '" + gcnew String(suser[3].c_str()) + "', '" + gcnew String(suser[4].c_str()) + "', '" + iuser[2] + "', '" + comboBox1->SelectedItem + "', '" + gcnew String(stest[0].c_str()) + "', '" + valuation + "');", conDB);
			 if (flaginsert==1){
				 conDB->Open();
				 try{
					 update_results->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message);}
				 conDB->Close();
			 }
			 else if (flaginsert == 0){
				 conDB->Open();
				 try{
					 insert_results->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
			 }
			 groupBox2->Visible = true;
			 groupBox3->Visible = false;
			 ClientSize = System::Drawing::Size(372, 341);
}
private: System::Void MyForm1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 parentForm->Location = this->Location;
			 parentForm->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClientSize = System::Drawing::Size(226, 254);
			 groupBox1->Visible = false;
			 button1->Visible = false;
			 button4->Visible = false;
			 groupBox6->Visible = true;
			 textBox2->Text = gcnew String(suser[0].c_str());
			 textBox3->Text = gcnew String(suser[1].c_str());
			 textBox4->Text = gcnew String(suser[2].c_str());
			 textBox5->Text = Convert::ToString(iuser[2]);
			 textBox6->Text = Convert::ToString(iuser[3]);
			 comboBox2->Items->Clear();
			 comboBox3->Items->Clear();
			 for (int i = 0; i < parentForm->comboBox2->Items->Count; i++)
			 {
				 comboBox2->Items->Add(parentForm->comboBox2->Items[i]);
			 }
			 comboBox2->SelectedItem = gcnew String(suser[3].c_str());
			 for (int i = 0; i < parentForm->comboBox1->Items->Count; i++)
			 {
				 comboBox3->Items->Add(parentForm->comboBox1->Items[i]);
			 }
			 comboBox3->SelectedItem = gcnew String(suser[4].c_str());


}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 flag = 0;
			 if (textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "" || comboBox2->Text == "" || comboBox3->Text == "" )
			 {
				 MessageBox::Show("Все поля должны быть заполнены!"); flag = 1;
			 }
			 else
			 {
				 for (int i = 0; i < textBox6->TextLength; i++)
				 {
					 wchar_t j = Convert::ToChar(textBox6->Text[i]);
					 if (j != '0' && j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6' && j != '7' && j != '8' && j != '9')
					 {
						 flag = 1;
					 }
				 }
				 for (int i = 0; i < textBox5->TextLength; i++)
				 {
					 wchar_t j = Convert::ToChar(textBox5->Text[i]);
					 if (j != '1' && j != '2' && j != '3' && j != '4' && j != '5' && j != '6')
					 {
						 flag = 1;
					 }
				 }
				 if (flag != 0){ MessageBox::Show("Поля 'course' и 'nsc' должны содержать только цифры!"); }
				 if (textBox5->TextLength>1){ flag = 1; MessageBox::Show("поле 'course' принимает значение от 1 до 6!"); }
			 }
			 if (flag != 1)
			 {
				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlCommand^ update_user = gcnew MySqlCommand("UPDATE `astzs_db`.`users` SET `course`='" + Convert::ToInt32(textBox5->Text) + "', `nsc`='" + Convert::ToInt32(textBox6->Text) + "', `first name`='" + textBox2->Text + "', `last name`='" + textBox3->Text + "', `patronymic`='" + textBox4->Text + "', `group`='" + comboBox2->SelectedItem + "', `Mode of study`='" + comboBox3->SelectedItem + "' WHERE `id`='" + iuser[0] + "';", conDB);
				 conDB->Open();
				 try
				 {
					 update_user->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); flag = 1; }
				 conDB->Close();
				 if (flag != 1){
					 ClientSize = System::Drawing::Size(221, 208);
					 MarshalString(textBox2->Text, suser[0]);
					 MarshalString(textBox3->Text, suser[1]);
					 MarshalString(textBox4->Text, suser[2]);
					 MarshalString(Convert::ToString(comboBox2->SelectedItem), suser[3]);
					 MarshalString(Convert::ToString(comboBox3->SelectedItem), suser[4]);
					 iuser[2] = Convert::ToInt32(textBox5->Text);
					 iuser[3] = Convert::ToInt32(textBox6->Text);
					 label2->Text = "Имя - " + gcnew String(suser[0].c_str());
					 label3->Text = "Фамилия - " + gcnew String(suser[1].c_str());
					 label4->Text = "Отчество - " + gcnew String(suser[2].c_str());
					 label5->Text = "Группа - " + gcnew String(suser[3].c_str());
					 label6->Text = "Отделение - " + gcnew String(suser[4].c_str());
					 label7->Text = "Курс - " + iuser[2];
					 label8->Text = "С/Б - " + iuser[3];
					 groupBox6->Visible = false;
					 groupBox1->Visible = true;
					 button1->Visible = true;
					 button4->Visible = true;
				 }
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClientSize = System::Drawing::Size(221, 208);
			 groupBox6->Visible = false;
			 groupBox1->Visible = true;
			 button1->Visible = true;
			 button4->Visible = true;
}
};
}
