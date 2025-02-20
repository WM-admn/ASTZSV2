#pragma once
#include"MyForm.h"
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
extern int questionid[1000][2];
extern string connection;

namespace ASTZSV2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		MyForm2(MyForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: MyForm^ parentForm;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox4;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Button^  button16;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::CheckBox^  checkBox15;
private: System::Windows::Forms::CheckBox^  checkBox14;
private: System::Windows::Forms::CheckBox^  checkBox13;
private: System::Windows::Forms::CheckBox^  checkBox12;
private: System::Windows::Forms::CheckBox^  checkBox11;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::CheckedListBox^  checkedListBox5;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::ListBox^  listBox3;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Button^  button18;



private: System::Windows::Forms::ComboBox^  comboBox10;
private: System::Windows::Forms::ComboBox^  comboBox14;
private: System::Windows::Forms::ComboBox^  comboBox13;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label31;






	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(379, 330);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Главное меню";
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(6, 269);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(367, 55);
			this->button17->TabIndex = 4;
			this->button17->Text = L"Результаты тестирования";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm2::button17_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(6, 208);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(367, 55);
			this->button14->TabIndex = 3;
			this->button14->Text = L"Группы и пользователи";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(367, 55);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Создание и редактирование тестов";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(6, 81);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(367, 59);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Разделы";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(367, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавление и редактирование вопросов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->comboBox5);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(454, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(723, 726);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 234);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(567, 20);
			this->textBox2->TabIndex = 46;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(488, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 21);
			this->button7->TabIndex = 45;
			this->button7->Text = L"Удалить вопрос";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(256, 13);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(458, 121);
			this->listBox1->TabIndex = 44;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &MyForm2::listBox1_DoubleClick);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(129, 140);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(113, 21);
			this->textBox15->TabIndex = 43;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(9, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 21);
			this->button6->TabIndex = 42;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(129, 118);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(113, 21);
			this->comboBox5->TabIndex = 41;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox5_SelectedIndexChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 121);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 13);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Выберите раздел";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 96);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 21);
			this->button5->TabIndex = 39;
			this->button5->Text = L"Добавить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(129, 96);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(113, 21);
			this->textBox14->TabIndex = 38;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(604, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 21);
			this->button4->TabIndex = 37;
			this->button4->Text = L"Отмена";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 77);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 13);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Выберите категорию";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(129, 74);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(113, 21);
			this->comboBox4->TabIndex = 35;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox4_SelectedIndexChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 677);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 13);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Ответ 8";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 629);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Ответ 7";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 581);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Ответ 6";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 533);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Ответ 5";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(58, 674);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(656, 42);
			this->textBox13->TabIndex = 30;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(58, 626);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(656, 42);
			this->textBox12->TabIndex = 29;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(58, 578);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(656, 42);
			this->textBox11->TabIndex = 28;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(58, 530);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(656, 42);
			this->textBox10->TabIndex = 27;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(58, 482);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(656, 42);
			this->textBox9->TabIndex = 26;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(58, 434);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(656, 42);
			this->textBox8->TabIndex = 25;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(58, 386);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(656, 42);
			this->textBox7->TabIndex = 24;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(58, 338);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(656, 42);
			this->textBox6->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 312);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(567, 20);
			this->textBox5->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 286);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(567, 20);
			this->textBox4->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 260);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(567, 20);
			this->textBox3->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 485);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Ответ 4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 437);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Ответ 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 389);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Ответ 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 341);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Ответ 1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 315);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Сылка на изображение 4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Сылка на изображение 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(135, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Сылка на изображение 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Сылка на изображение 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 164);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(620, 64);
			this->textBox1->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Текст вопроса";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(158, 52);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(84, 21);
			this->comboBox3->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Количество верных ответов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Количество ответов";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(158, 30);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(84, 21);
			this->comboBox2->Sorted = true;
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Наличие изображений";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(158, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(84, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(372, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 21);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Обновить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(256, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 21);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Добавить ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->checkBox9);
			this->groupBox3->Controls->Add(this->checkBox8);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->checkBox7);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Controls->Add(this->textBox17);
			this->groupBox3->Controls->Add(this->textBox16);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkedListBox3);
			this->groupBox3->Controls->Add(this->checkedListBox2);
			this->groupBox3->Controls->Add(this->checkedListBox1);
			this->groupBox3->Location = System::Drawing::Point(1183, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(813, 638);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Категории";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(7, 609);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(320, 23);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Отмена";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// checkBox9
			// 
			this->checkBox9->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox9->Location = System::Drawing::Point(165, 543);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(162, 24);
			this->checkBox9->TabIndex = 14;
			this->checkBox9->Text = L"Удалить подразделы";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox9_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox8->Location = System::Drawing::Point(6, 543);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(153, 24);
			this->checkBox8->TabIndex = 13;
			this->checkBox8->Text = L"Удалить разделы";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox8_CheckedChanged);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(7, 573);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(320, 29);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Сохранить изменения";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button9_Click);
			// 
			// checkBox7
			// 
			this->checkBox7->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox7->Location = System::Drawing::Point(165, 513);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(162, 24);
			this->checkBox7->TabIndex = 11;
			this->checkBox7->Text = L"Добавить подраздел";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox6->Location = System::Drawing::Point(6, 513);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(153, 24);
			this->checkBox6->TabIndex = 10;
			this->checkBox6->Text = L"Добавить раздел";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox6_CheckedChanged);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(165, 487);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(162, 20);
			this->textBox17->TabIndex = 9;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(7, 487);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(152, 20);
			this->textBox16->TabIndex = 8;
			// 
			// checkBox5
			// 
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->Location = System::Drawing::Point(165, 456);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(162, 24);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->Text = L"Переименовать подраздел";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->Location = System::Drawing::Point(6, 456);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(153, 24);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"Переименовать раздел";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->Location = System::Drawing::Point(333, 13);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(474, 24);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"Сменить расположение вопросов";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->Location = System::Drawing::Point(165, 13);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(162, 24);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Сменить категорию";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox2_CheckedChanged);
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(333, 43);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(474, 589);
			this->checkedListBox3->TabIndex = 2;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(165, 43);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(162, 409);
			this->checkedListBox2->TabIndex = 1;
			this->checkedListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::checkedListBox2_SelectedIndexChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(6, 13);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(153, 439);
			this->checkedListBox1->TabIndex = 0;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::checkedListBox1_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox10);
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->listBox2);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->checkedListBox4);
			this->groupBox4->Controls->Add(this->textBox24);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->comboBox7);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->textBox21);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->textBox20);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->textBox19);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->comboBox6);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Location = System::Drawing::Point(12, 353);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(436, 570);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Создание и редактирование тестов";
			// 
			// checkBox10
			// 
			this->checkBox10->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox10->Location = System::Drawing::Point(228, 541);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(196, 23);
			this->checkBox10->TabIndex = 23;
			this->checkBox10->Text = L"Выполнить удаление теста";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox10_CheckedChanged);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 541);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(216, 23);
			this->button13->TabIndex = 22;
			this->button13->Text = L"Отмена";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(6, 513);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(216, 23);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Ок";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->Location = System::Drawing::Point(228, 513);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(196, 23);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Выполнить обновления теста";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox1_CheckedChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(228, 9);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(196, 498);
			this->listBox2->TabIndex = 19;
			this->listBox2->DoubleClick += gcnew System::EventHandler(this, &MyForm2::listBox2_DoubleClick);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(47, 216);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(144, 13);
			this->label27->TabIndex = 18;
			this->label27->Text = L"Включенные подкатегории";
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Location = System::Drawing::Point(10, 233);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(212, 274);
			this->checkedListBox4->TabIndex = 17;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(100, 193);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(122, 20);
			this->textBox24->TabIndex = 16;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(7, 196);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(87, 13);
			this->label26->TabIndex = 15;
			this->label26->Text = L"Кол-во попыток";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(7, 173);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(60, 13);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Категория";
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(73, 170);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(149, 21);
			this->comboBox7->TabIndex = 13;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox7_SelectedIndexChanged);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(100, 149);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(122, 20);
			this->textBox23->TabIndex = 12;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(7, 152);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(96, 13);
			this->label24->TabIndex = 11;
			this->label24->Text = L"Вопросов в тесте";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(100, 127);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(122, 20);
			this->textBox22->TabIndex = 10;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(7, 130);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(80, 13);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Время на тест";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(75, 105);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(147, 20);
			this->textBox21->TabIndex = 8;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(7, 108);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 13);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Балов на 5";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(75, 83);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(147, 20);
			this->textBox20->TabIndex = 6;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(7, 86);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 13);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Балов на 4";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(75, 61);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(147, 20);
			this->textBox19->TabIndex = 4;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 64);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 13);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Балов на 3";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(10, 38);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(212, 21);
			this->comboBox6->TabIndex = 2;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox6_SelectedIndexChanged);
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(42, 17);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(180, 20);
			this->textBox18->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(7, 20);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Имя";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->checkBox15);
			this->groupBox5->Controls->Add(this->checkBox14);
			this->groupBox5->Controls->Add(this->checkBox13);
			this->groupBox5->Controls->Add(this->checkBox12);
			this->groupBox5->Controls->Add(this->checkBox11);
			this->groupBox5->Controls->Add(this->textBox25);
			this->groupBox5->Controls->Add(this->checkedListBox5);
			this->groupBox5->Controls->Add(this->comboBox9);
			this->groupBox5->Controls->Add(this->comboBox8);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->listBox3);
			this->groupBox5->Location = System::Drawing::Point(408, 229);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(585, 616);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(6, 588);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(571, 23);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Отмена";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(6, 559);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(571, 23);
			this->button15->TabIndex = 13;
			this->button15->Text = L"Ок";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::button15_Click);
			// 
			// checkBox15
			// 
			this->checkBox15->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox15->Location = System::Drawing::Point(175, 529);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(402, 24);
			this->checkBox15->TabIndex = 12;
			this->checkBox15->Text = L"Выполнить удаление";
			this->checkBox15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox15_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox14->Location = System::Drawing::Point(175, 499);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(402, 24);
			this->checkBox14->TabIndex = 11;
			this->checkBox14->Text = L"Выполнить перемещение  ";
			this->checkBox14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox14_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox13->Location = System::Drawing::Point(6, 529);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(163, 24);
			this->checkBox13->TabIndex = 10;
			this->checkBox13->Text = L"Удалить группу";
			this->checkBox13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox13_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox12->Location = System::Drawing::Point(6, 499);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(163, 24);
			this->checkBox12->TabIndex = 9;
			this->checkBox12->Text = L"Переименовать группу";
			this->checkBox12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox12_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox11->Location = System::Drawing::Point(6, 469);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(163, 24);
			this->checkBox11->TabIndex = 8;
			this->checkBox11->Text = L"Добавить группу";
			this->checkBox11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::checkBox11_CheckedChanged);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(6, 445);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(163, 20);
			this->textBox25->TabIndex = 7;
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Location = System::Drawing::Point(175, 59);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(402, 439);
			this->checkedListBox5->TabIndex = 6;
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(379, 32);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(198, 21);
			this->comboBox9->TabIndex = 5;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox9_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(175, 32);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(198, 21);
			this->comboBox8->TabIndex = 4;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox8_SelectedIndexChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(462, 16);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(31, 13);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Курс";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(246, 16);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(62, 13);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Отделение";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(70, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(44, 13);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Группы";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(6, 32);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(163, 407);
			this->listBox3->TabIndex = 0;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::listBox3_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button19);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label33);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->label31);
			this->groupBox6->Controls->Add(this->comboBox14);
			this->groupBox6->Controls->Add(this->comboBox13);
			this->groupBox6->Controls->Add(this->comboBox12);
			this->groupBox6->Controls->Add(this->comboBox11);
			this->groupBox6->Controls->Add(this->comboBox10);
			this->groupBox6->Controls->Add(this->dataGridView1);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Location = System::Drawing::Point(408, 179);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(647, 390);
			this->groupBox6->TabIndex = 5;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Результаты тестирования";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(6, 358);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(634, 23);
			this->button19->TabIndex = 13;
			this->button19->Text = L"Отмена";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm2::button19_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(515, 22);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(31, 13);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Курс";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(387, 22);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(42, 13);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Группа";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(259, 22);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 13);
			this->label33->TabIndex = 10;
			this->label33->Text = L"Отделение";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(131, 22);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 13);
			this->label32->TabIndex = 9;
			this->label32->Text = L"Имя теста";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(3, 22);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 13);
			this->label31->TabIndex = 8;
			this->label31->Text = L"Категории";
			// 
			// comboBox14
			// 
			this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(518, 38);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(122, 21);
			this->comboBox14->TabIndex = 7;
			this->comboBox14->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox14_SelectedIndexChanged);
			// 
			// comboBox13
			// 
			this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(390, 38);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(122, 21);
			this->comboBox13->TabIndex = 6;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox13_SelectedIndexChanged);
			// 
			// comboBox12
			// 
			this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(262, 38);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(122, 21);
			this->comboBox12->TabIndex = 5;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox12_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(134, 38);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(122, 21);
			this->comboBox11->TabIndex = 4;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox11_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(6, 38);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(122, 21);
			this->comboBox10->TabIndex = 3;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox10_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->Location = System::Drawing::Point(6, 65);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(634, 259);
			this->dataGridView1->TabIndex = 1;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(6, 330);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(634, 23);
			this->button18->TabIndex = 0;
			this->button18->Text = L"Обновить";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm2::button18_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1916, 1054);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ASTZS-admin";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int ID;

	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
				 defaultres();
				 
				 
	}
	private: System::Void MyForm2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				// defaultres();
				 parentForm->Location = this->Location;
				 parentForm->Show();
	}
	private: System::Void defaultres(void) {
				 groupBox1->Visible = true;
				 groupBox2->Visible = false;
				 groupBox3->Visible = false;
				 groupBox4->Visible = false;
				 groupBox5->Visible = false;
				 groupBox6->Visible = false;
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
				 checkBox13->Checked = false;
				 checkBox14->Checked = false;
				 checkBox15->Checked = false;
				 ClientSize = System::Drawing::Size(403, 347);
				 groupBox1->Location = System::Drawing::Point(12, 12);		 
		}




private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible = false;
			 groupBox2->Visible = true;
			 ClientSize = System::Drawing::Size(746, 748);
			 groupBox2->Location = System::Drawing::Point(12, 12);
				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;
				 comboBox4->Items->Clear();
				 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_category->ExecuteReader();
					 while (Reader->Read())
					 {
						 comboBox4->Items->Add(Reader->GetValue(1)->ToString());
						 flag++;
						 
					 }
					 if (flag != 0){ comboBox4->SelectedIndex = 0; }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message);}
				 conDB->Close();
				 MySqlCommand^ loading_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + comboBox4->SelectedItem + "' ;", conDB);
				 comboBox5->Items->Clear();
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_section->ExecuteReader();
					 while (Reader->Read())
					 {
						 comboBox5->Items->Add(Reader->GetValue(1)->ToString());
						 questionid[flag][0] = Reader->GetInt32(0);
						 flag++;
					 }
					 if (flag != 0){ comboBox5->SelectedIndex = 0; }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
	 
				 comboBox1->Items->Clear();
				 for (int i = 0; i < 5; i++)
				 {
					 comboBox1->Items->Add(i);
				 }
				 comboBox1->SelectedIndex = 0;
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch (comboBox1->SelectedIndex)
			 {
			 case 0: 
			 {
					   comboBox2->Items->Clear();
					   comboBox2->Items->Add(4);
					   comboBox2->Items->Add(6);
					   comboBox2->Items->Add(8);
					   comboBox3->Items->Clear();
					   for (int i = 1; i < 9; i++)
					   {
						   comboBox3->Items->Add(i);
					   }
					   comboBox3->SelectedItem = 1;
					   comboBox2->SelectedItem = 8;
					   textBox2->ReadOnly = true;
					   textBox2->Text="0";
					   textBox3->ReadOnly = true;
					   textBox3->Text = "0";
		               textBox4->ReadOnly = true;
					   textBox4->Text = "0";
					   textBox5->ReadOnly = true;
					   textBox5->Text = "0";					   
					 
			 }break;
			 case 1: {
						 comboBox2->Items->Clear();
						 comboBox2->Items->Add(4);
						 comboBox2->Items->Add(6);
						 comboBox3->Items->Clear();
						 for (int i = 1; i < 7; i++)
						 {
							 comboBox3->Items->Add(i);
						 }
						 comboBox3->SelectedItem = 1;
						 comboBox2->SelectedItem = 6;
						 textBox2->ReadOnly = false;
						 textBox3->ReadOnly = true;
						 textBox3->Text = "0";
						 textBox4->ReadOnly = true;
						 textBox4->Text = "0";
						 textBox5->ReadOnly = true;
						 textBox5->Text = "0";
			 
			 
			 }break;
			 case 2: {
						
						 comboBox2->Items->Clear();
						 comboBox2->Items->Add(2);
						 comboBox3->Items->Clear();
						 for (int i = 1; i < 3; i++)
						 {
							 comboBox3->Items->Add(i);
						 }
						 comboBox3->SelectedItem = 1;
						 comboBox2->SelectedItem = 2;
						 textBox2->ReadOnly = false;
						 textBox3->ReadOnly = false;
						 textBox4->ReadOnly = true;
						 textBox4->Text = "0";
						 textBox5->ReadOnly = true;
						 textBox5->Text = "0";		 
			 }break;
			 case 3: 
			 {
					   comboBox2->Items->Clear();
					   comboBox2->Items->Add(3);
					   comboBox3->Items->Clear();
					   for (int i = 1; i < 4; i++)
					   {
						   comboBox3->Items->Add(i);
					   }
					   comboBox3->SelectedItem = 1;
					   comboBox2->SelectedItem = 3;
					   textBox2->ReadOnly = false;
					   textBox3->ReadOnly = false;
					   textBox4->ReadOnly = false;
					   textBox5->ReadOnly = true;
					   textBox5->Text = "0";
			 
			 }break;
			 case 4: 
			 {
					   comboBox2->Items->Clear();
					   comboBox2->Items->Add(4);
					   comboBox3->Items->Clear();
					   for (int i = 1; i < 5; i++)
					   {
						   comboBox3->Items->Add(i);
					   }
					   comboBox3->SelectedItem = 1;
					   comboBox2->SelectedItem = 4;
					   textBox2->ReadOnly = false;
					   textBox3->ReadOnly = false;
					   textBox4->ReadOnly = false;
					   textBox5->ReadOnly = false;
			 
			 }break;
			 default:{}break;
			 }
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 switch (comboBox2->SelectedIndex)
			 {
			 case 0:
			 {
					   if (comboBox1->SelectedIndex>1)
					   {
						   textBox6->ReadOnly = true;
						   textBox6->Text = "0";
						   textBox7->ReadOnly = true;
						   textBox7->Text = "0";
						   textBox8->ReadOnly = true;
						   textBox8->Text = "0";
						   textBox9->ReadOnly = true;
						   textBox9->Text = "0";
						   textBox10->ReadOnly = true;
						   textBox10->Text = "0";
						   textBox11->ReadOnly = true;
						   textBox11->Text = "0";
						   textBox12->ReadOnly = true;
						   textBox12->Text = "0";
						   textBox13->ReadOnly = true;
						   textBox13->Text = "0";
					   }
					   else 
					   {
						   comboBox3->Items->Clear();
						   for (int i = 1; i < 5; i++)
						   {
							   comboBox3->Items->Add(i);
						   }
						   comboBox3->SelectedItem = 1;
						   textBox6->ReadOnly = false;

						   textBox7->ReadOnly = false;

						   textBox8->ReadOnly = false;

						   textBox9->ReadOnly = false;

						   textBox10->ReadOnly = true;
						   textBox10->Text = "0";
						   textBox11->ReadOnly = true;
						   textBox11->Text = "0";
						   textBox12->ReadOnly = true;
						   textBox12->Text = "0";
						   textBox13->ReadOnly = true;
						   textBox13->Text = "0";

					   }

			 }break;
			 case 1: {
						 comboBox3->Items->Clear();
						 for (int i = 1; i < 7; i++)
						 {
							 comboBox3->Items->Add(i);
						 }
						 comboBox3->SelectedItem = 1;
						 textBox6->ReadOnly = false;

						 textBox7->ReadOnly = false;

						 textBox8->ReadOnly = false;

						 textBox9->ReadOnly = false;

						 textBox10->ReadOnly = false;
		
						 textBox11->ReadOnly = false;
			
						 textBox12->ReadOnly = true;
						 textBox12->Text = "0";
						 textBox13->ReadOnly = true;
						 textBox13->Text = "0";
						 


			 }break;
			 case 2: {
						 comboBox3->Items->Clear();
						 for (int i = 1; i < 9; i++)
						 {
							 comboBox3->Items->Add(i);
						 }
						 comboBox3->SelectedItem = 1;
						 textBox6->ReadOnly = false;

						 textBox7->ReadOnly = false;

						 textBox8->ReadOnly = false;

						 textBox9->ReadOnly = false;

						 textBox10->ReadOnly = false;

						 textBox11->ReadOnly = false;

						 textBox12->ReadOnly = false;
			
						 textBox13->ReadOnly = false;
					




			 }break;
			 default:{
						
						 
			 
			 
			 
			 
			 }break;
			 }
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ loading_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + comboBox4->SelectedItem + "' ;", conDB);
			 comboBox5->Items->Clear();
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_section->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox5->Items->Add(Reader->GetValue(1)->ToString());
					 questionid[flag][0] = Reader->GetInt32(0);
					 flag++;
				 }
				 if (flag != 0){ comboBox5->SelectedIndex = 0; }

			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();

			
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 int flag;
			 if (comboBox4->Text == "" ||
				 comboBox5->Text == "" ||
				 textBox1->Text == "" ||
				 textBox2->Text == "" ||
				 textBox3->Text == "" ||
				 textBox4->Text == "" ||
				 textBox5->Text == "" ||
				 textBox6->Text == "" ||
				 textBox7->Text == "" ||
				 textBox8->Text == "" ||
				 textBox9->Text == "" ||
				 textBox10->Text == "" ||
				 textBox11->Text == "" ||
				 textBox12->Text == "" ||
				 textBox13->Text == "")
			 {
				 MessageBox::Show("Все должно быть заполнено!");;
			 }
			 else
			 {
				 if (comboBox1->SelectedIndex > 1)
				 {
					 flag = 1;
				 }
				 else
				 {
					 flag = 0;
				 }
				 MySqlCommand^ create_question = gcnew MySqlCommand("INSERT INTO `astzs_db`.`question` (`image`, `selectimg`, `corans`, `numofques`, `sectionid`, `question`, `imagelocation1`, `imagelocation2`, `imagelocation3`, `imagelocation4`, `answer1`, `answer2`, `answer3`, `answer4`, `answer5`, `answer6`, `answer7`, `answer8`, `category`) VALUES ('" + Convert::ToInt32(comboBox1->SelectedItem) + "', '" + flag + "', '" + Convert::ToInt32(comboBox3->SelectedItem) + "', '" + Convert::ToInt32(comboBox2->SelectedItem) + "', '" + questionid[comboBox5->SelectedIndex][0] + "', '" + textBox1->Text + "', '" + textBox2->Text + "', '" + textBox3->Text + "', '" + textBox4->Text + "', '" + textBox5->Text + "', '" + textBox6->Text + "', '" + textBox7->Text + "', '" + textBox8->Text + "', '" + textBox9->Text + "', '" + textBox10->Text + "', '" + textBox11->Text + "', '" + textBox12->Text + "', '" + textBox13->Text + "', '"+comboBox4->SelectedItem+"');", conDB);
				 conDB->Open();
				 try{
					 create_question->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message);}
				 conDB->Close();
				 comboBox5_SelectedIndexChanged(sender, e);
			 }
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ get_question = gcnew MySqlCommand("select * from `astzs_db`.`question` where `category`='" + comboBox4->SelectedItem + "' && `sectionid`='" + questionid[comboBox5->SelectedIndex][0] + "' ;", conDB);

			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = get_question->ExecuteReader();
				 while (Reader->Read())
				 {
					 listBox1->Items->Add(Reader->GetValue(6)->ToString());
					 questionid[flag][1] = Reader->GetInt32(0);
					 flag++;
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
}
private: System::Void listBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ get_question1 = gcnew MySqlCommand("select * from `astzs_db`.`question` where `id`='"+questionid[listBox1->SelectedIndex][1]+"';", conDB);
			 ID = questionid[listBox1->SelectedIndex][1];
			 try{
				 conDB->Open();
				 Reader = get_question1->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox1->SelectedItem = Reader->GetInt32(1);
					 comboBox2->SelectedItem = Reader->GetInt32(4);
					 comboBox3->SelectedItem = Reader->GetInt32(3);
					     textBox1->Text =Reader->GetValue(6)->ToString();
						 textBox2->Text = Reader->GetValue(7)->ToString();
						 textBox3->Text = Reader->GetValue(8)->ToString();
						 textBox4->Text = Reader->GetValue(9)->ToString();
						 textBox5->Text = Reader->GetValue(10)->ToString();
						 textBox6->Text = Reader->GetValue(11)->ToString();
						 textBox7->Text = Reader->GetValue(12)->ToString();
						 textBox8->Text = Reader->GetValue(13)->ToString();
						 textBox9->Text = Reader->GetValue(14)->ToString();
						 textBox10->Text = Reader->GetValue(15)->ToString();
						 textBox11->Text = Reader->GetValue(16)->ToString();
						 textBox12->Text = Reader->GetValue(17)->ToString();
						 textBox13->Text = Reader->GetValue(18)->ToString();
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();



}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int flag;
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 if (comboBox4->Text == "" ||
				 comboBox5->Text == "" ||
				 textBox1->Text == "" ||
				 textBox2->Text == "" ||
				 textBox3->Text == "" ||
				 textBox4->Text == "" ||
				 textBox5->Text == "" ||
				 textBox6->Text == "" ||
				 textBox7->Text == "" ||
				 textBox8->Text == "" ||
				 textBox9->Text == "" ||
				 textBox10->Text == "" ||
				 textBox11->Text == "" ||
				 textBox12->Text == "" ||
				 textBox13->Text == "")
			 {
				 MessageBox::Show("Все должно быть заполнено!");;
			 }
			 else
			 {
				 if (comboBox1->SelectedIndex > 1)
				 {
					 flag = 1;
				 }
				 else
				 {
					 flag = 0;
				 }
				 MySqlCommand^ update_question = gcnew MySqlCommand("UPDATE `astzs_db`.`question` SET `image`='" + Convert::ToInt32(comboBox1->SelectedItem) + "', `selectimg`='" + flag + "', `corans`='" + Convert::ToInt32(comboBox3->SelectedItem) + "', `numofques`='" + Convert::ToInt32(comboBox2->SelectedItem) + "', `sectionid`='" + questionid[comboBox5->SelectedIndex][0] + "', `question`='" + textBox1->Text + "', `imagelocation1`='" + textBox2->Text + "', `imagelocation2`='" + textBox3->Text + "', `imagelocation3`='" + textBox4->Text + "', `imagelocation4`='" + textBox5->Text + "', `answer1`='" + textBox6->Text + "', `answer2`='" + textBox7->Text + "', `answer3`='" + textBox8->Text + "', `answer4`='" + textBox9->Text + "', `answer5`='" + textBox10->Text + "', `answer6`='" + textBox11->Text + "', `answer7`='" + textBox12->Text + "', `answer8`='" + textBox13->Text + "', `category`='" + comboBox4->SelectedItem + "' WHERE `id`='" + ID + "';", conDB);
				 conDB->Open();
				 try{
					 update_question->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 ID = 0;
				 comboBox5_SelectedIndexChanged(sender, e);

			 }


			 
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlCommand^ delete_question = gcnew MySqlCommand("DELETE FROM `astzs_db`.`question` WHERE `id`='" + questionid[listBox1->SelectedIndex][1] + "';", conDB);
			 conDB->Open();
			 try{
				 delete_question->ExecuteNonQuery();
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
			 comboBox5_SelectedIndexChanged(sender, e);

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox14->Text == ""){
				 MessageBox::Show("А название категории?");
			 }
			 else {
				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlCommand^ new_category = gcnew MySqlCommand("INSERT INTO `astzs_db`.`category` (`category name`) VALUES('" + textBox14->Text + "');", conDB);
				 conDB->Open();
				 try{
					 new_category->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 textBox14->Text = "";

				 MySqlDataReader^ Reader;
				 comboBox4->Items->Clear();
				 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_category->ExecuteReader();
					 while (Reader->Read())
					 {
						 comboBox4->Items->Add(Reader->GetValue(1)->ToString());
						 flag++;

					 }
					 if (flag != 0){ comboBox4->SelectedIndex = 0; }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox15->Text == ""){
				 MessageBox::Show("А название раздела, что ищем проблемы?");
			 }
			 else {
				 int flag = 0;
				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;
				 MySqlCommand^ new_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `name`='" + textBox15->Text + "' && `category`= '" + comboBox4->SelectedItem + "';", conDB);
				 try{
					 conDB->Open();
					 Reader = new_section->ExecuteReader();
					 while (Reader->Read())
					 {
						 flag++;
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 if (flag != 0){ MessageBox::Show("Данный подраздел уже создан!"); }
				 else{
					 MySqlCommand^ new_section1 = gcnew MySqlCommand("INSERT INTO `astzs_db`.`section` (`name`, `category`) VALUES ('" + textBox15->Text + "', '" + comboBox4->SelectedItem + "');", conDB);
					 conDB->Open();
					 try{
						 new_section1->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 textBox15->Text = "";
					 comboBox4_SelectedIndexChanged(sender, e);
				 }
			 }
}

private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible = false;
			 groupBox3->Visible = true;
			 ClientSize = System::Drawing::Size(840, 660);
			 groupBox3->Location = System::Drawing::Point(12, 12);


			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 checkedListBox1->Items->Clear();
			 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_category->ExecuteReader();
				 while (Reader->Read())
				 {
					 checkedListBox1->Items->Add(Reader->GetValue(1)->ToString());
					 flag++;

				 }
				 if (flag != 0){ checkedListBox1->SelectedIndex = 0; 
				 checkedListBox1->SetItemChecked(0, true);
				 //checkedListBox1->CheckedItems[0];
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
			 
			 checkedListBox2->Items->Clear();
			 MySqlCommand^ loading_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + checkedListBox1->SelectedItem + "';", conDB);
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_section->ExecuteReader();
				 while (Reader->Read())
				 {
					 checkedListBox2->Items->Add(Reader->GetValue(1)->ToString());
					 questionid[flag][0] = Reader->GetInt32(0);
					 flag++;

				 }
				 if (flag != 0){ checkedListBox2->SelectedIndex = 0;
				 checkedListBox2->SetItemChecked(0, true);
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();

			 checkedListBox3->Items->Clear();
			 MySqlCommand^ loading_question = gcnew MySqlCommand("select * from `astzs_db`.`question` where `sectionid`='" + questionid[checkedListBox2->SelectedIndex][0] + "';", conDB);
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_question->ExecuteReader();
				 while (Reader->Read())
				 {
					 checkedListBox3->Items->Add(Reader->GetValue(6)->ToString());
					 questionid[flag][1] = Reader->GetInt32(0);
					 flag++;

				 }
				 if (flag != 0){ checkedListBox3->SelectedIndex = 0; 
				 checkedListBox3->SetItemChecked(0, true);
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();








}

private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox2->Checked == true)
			 {
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
				 checkedListBox3->SelectionMode = SelectionMode::None;

			 }
			 if (checkBox2->Checked==false)
			 { checkedListBox3->SelectionMode = SelectionMode::One; }
			

}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (checkBox3->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
				 checkedListBox3->SelectionMode = SelectionMode::One;

			 }
			 
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox4->Checked == true){ textBox16->Text = checkedListBox1->SelectedItem->ToString(); }
			 if (checkBox8->Checked == false)
			 {
				 if (checkedListBox1->CheckedItems->Count != 1)
				 {
					 for (int i = 0; i < checkedListBox1->Items->Count; i++)
						 checkedListBox1->SetItemChecked(i, false);
					 checkedListBox1->SetItemChecked(checkedListBox1->SelectedIndex, true);
				 }
					 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;

				 if (checkBox2->Checked == false)
				 {
					 checkedListBox2->Items->Clear();
					 MySqlCommand^ loading_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + checkedListBox1->SelectedItem + "';", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = loading_section->ExecuteReader();
						 while (Reader->Read())
						 {
							 checkedListBox2->Items->Add(Reader->GetValue(1)->ToString());
							 questionid[flag][0] = Reader->GetInt32(0);
							 flag++;

						 }
						 if (flag != 0){
							 checkedListBox2->SelectedIndex = 0;
							 checkedListBox2->SetItemChecked(0, true);
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
				 }
				 if (checkBox3->Checked == false && checkBox2->Checked == false)
				 {

					 checkedListBox3->Items->Clear();
					 MySqlCommand^ loading_question = gcnew MySqlCommand("select * from `astzs_db`.`question` where `sectionid`='" + questionid[checkedListBox2->SelectedIndex][0] + "';", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = loading_question->ExecuteReader();
						 while (Reader->Read())
						 {
							 checkedListBox3->Items->Add(Reader->GetValue(6)->ToString());
							 questionid[flag][1] = Reader->GetInt32(0);
							 flag++;

						 }
						 if (flag != 0){
							 checkedListBox3->SelectedIndex = 0;
							 checkedListBox3->SetItemChecked(0, true);
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
				 }
			 
			 }

}
private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox5->Checked == true){ textBox17->Text = checkedListBox2->SelectedItem->ToString(); }
			 if (checkBox9->Checked == false)
			 {
				 if (checkedListBox2->CheckedItems->Count != 1 && checkBox2->Checked == false)
				 {
					 for (int i = 0; i < checkedListBox2->Items->Count; i++)
						 checkedListBox2->SetItemChecked(i, false);
					 checkedListBox2->SetItemChecked(checkedListBox2->SelectedIndex, true);
				 }

				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;
				 if (checkBox3->Checked == false && checkBox2->Checked == false)
				 {
					 checkedListBox3->Items->Clear();
					 MySqlCommand^ loading_question = gcnew MySqlCommand("select * from `astzs_db`.`question` where `sectionid`='" + questionid[checkedListBox2->SelectedIndex][0] + "';", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = loading_question->ExecuteReader();
						 while (Reader->Read())
						 {
							 checkedListBox3->Items->Add(Reader->GetValue(6)->ToString());
							 questionid[flag][1] = Reader->GetInt32(0);
							 flag++;

						 }
						 if (flag != 0){
							 checkedListBox3->SelectedIndex = 0;
							 checkedListBox3->SetItemChecked(0, true);
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();

				 }
			 }



}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 if (checkBox2->Checked == true && checkedListBox2->CheckedItems->Count>0)
			 {
				 int ID=0;
				 String^ iddeleted_section = "";
				 String^ deleted_section = "";
				 MySqlCommand^ get_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + checkedListBox1->SelectedItem + "';", conDB);
				 try{
					 conDB->Open();
					 Reader = get_section->ExecuteReader();
					 while (Reader->Read())
					 {
						 String^ str1 = Reader->GetValue(1)->ToString();
						 for (int i = 0; i < checkedListBox2->CheckedItems->Count; i++)
						 {
							 if (Reader->GetInt32(0) == questionid[checkedListBox2->CheckedIndices[i]][0]){ ID++; }
							 String^ str = checkedListBox2->CheckedItems[i]->ToString();
							 if (str == str1)
							 {
								 iddeleted_section += " " + questionid[checkedListBox2->CheckedIndices[i]][0] + "";
							 }
						 }
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 if (ID == 0){
					 MessageBox::Show(iddeleted_section);
					 if (iddeleted_section != "")
					 {

						 for (int i = 0; i < iddeleted_section->Length; i++)
						 {
							 if (i == 0){ deleted_section = "DELETE FROM `astzs_db`.`section` WHERE `id`='"; }
							 if (i != 0 && iddeleted_section[i] != ' ' && i != iddeleted_section->Length - 1){ deleted_section += iddeleted_section[i]; }
							 if (i != 0 && iddeleted_section[i] == ' '){ deleted_section += "' ||  `id`='"; }
							 if (i != 0 && i == iddeleted_section->Length - 1){ deleted_section += "" + iddeleted_section[i] + "';"; }
						 } MessageBox::Show(deleted_section);

					 }


					 String^ section_update = "";
					 for (int i = 0; i < checkedListBox2->CheckedItems->Count; i++)
					 {
						 if (i == 0){
							 section_update = "UPDATE `astzs_db`.`section` SET `category`='" + checkedListBox1->SelectedItem + "' WHERE `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "' ";
							 if (i == 0 && i == checkedListBox2->CheckedItems->Count - 1)
							 {
								 section_update += ";";
							 }

						 }
						 if (i != 0 && i != checkedListBox2->CheckedItems->Count - 1){
							 section_update += "|| `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "' ";
						 }
						 if (i != 0 && i == checkedListBox2->CheckedItems->Count - 1){
							 section_update += "|| `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "' ;";
						 }
					 }MessageBox::Show(section_update);
					 MySqlCommand^ update_section = gcnew MySqlCommand("" + section_update + "", conDB);
					 MySqlCommand^ delete_section_update = gcnew MySqlCommand(deleted_section, conDB);
					 try{
						 conDB->Open();
						 update_section->ExecuteNonQuery();
						 if (iddeleted_section != ""){ delete_section_update->ExecuteNonQuery(); }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox2->Checked = false;
					 checkedListBox1_SelectedIndexChanged(sender, e);
				 }
				 else { MessageBox::Show("Вы не сменили категорию"); }

			 }
			 //else{ MessageBox::Show("Над ченить выбрать!"); checkBox2->Checked = false; checkBox3->Checked = false; }




			 else if (checkBox3->Checked == true)
			 {
				 if (questionid[checkedListBox2->SelectedIndex][0] == 0){ MessageBox::Show("Нет подраздела!"); }
				 if (checkedListBox3->CheckedItems->Count != 0 && questionid[checkedListBox2->SelectedIndex][0] != 0)
				 {
					 String^ update_question = "";
					 for (int i = 0; i < checkedListBox3->CheckedItems->Count; i++)
					 {
						 if (i == 0)
						 {
							 update_question = "UPDATE `astzs_db`.`question` SET `sectionid`='" + questionid[checkedListBox2->SelectedIndex][0] + "', `category`='" + checkedListBox1->SelectedItem + "' WHERE `id`='" + questionid[checkedListBox3->CheckedIndices[i]][1] + "'";
							 if (i == checkedListBox3->CheckedItems->Count - 1){ update_question += ";"; }
						 }
						 if (i != 0 && i != checkedListBox3->CheckedItems->Count - 1)
						 {
							 update_question += " || `id`='" + questionid[checkedListBox3->CheckedIndices[i]][1] + "'";
						 }
						 if (i != 0 && i == checkedListBox3->CheckedItems->Count - 1)
						 {
							 update_question += " || `id`='" + questionid[checkedListBox3->CheckedIndices[i]][1] + "';";
						 }
					 }MessageBox::Show(update_question);
					 MySqlCommand^ question_update = gcnew MySqlCommand(update_question, conDB);
					 try{
						 conDB->Open();
						 question_update->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox3->Checked = false;
					 checkedListBox2_SelectedIndexChanged(sender, e);
				 }
			 }

			 else if (checkBox4->Checked == true)
			 {
			 if (textBox16->Text == ""){ MessageBox::Show("А название категории?");}
			 if (textBox16->Text != "")
			 {
				 MySqlCommand^ create_category = gcnew MySqlCommand("UPDATE `astzs_db`.`category` SET `category name`='" + textBox16->Text + "' WHERE `category name`='"+checkedListBox1->SelectedItem+"';", conDB);
				 try{
					 conDB->Open();
					 create_category->ExecuteNonQuery();
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
				 checkBox4->Checked = false;
				 checkedListBox1->Items->Clear();
				 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_category->ExecuteReader();
					 while (Reader->Read())
					 {
						 checkedListBox1->Items->Add(Reader->GetValue(1)->ToString());
						 flag++;

					 }
					 if (flag != 0){
						 checkedListBox1->SelectedItem = textBox16->Text;
						 checkedListBox1->SetItemChecked(checkedListBox1->Items->IndexOf(textBox16->Text), true);
						 //checkedListBox1->CheckedItems[0];
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close(); textBox16->Text = "";
			 }


			 }

			 else if (checkBox5->Checked == true)
			 {
				 if (textBox17->Text == ""){ MessageBox::Show("А название подраздела?"); }
				 if (textBox17->Text != "")
				 {
					 if (checkedListBox2->CheckedItems->Count == 0)
					 {
						 MessageBox::Show("Интересно - и как это вы думаете переименовать несуществующию запись?");
					 }
					 else{
						 int flag = 0;
					 MySqlCommand^ select_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `name`='" + textBox17->Text + "' && `category`='" + checkedListBox1->SelectedItem + "';", conDB);
					 try{
						 conDB->Open();
						 Reader = select_section->ExecuteReader();
						 while (Reader->Read())
						 {
							 flag++;
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();

					 if (flag > 0){ MessageBox::Show("Дубликатить вздумал?"); }
					 else{

						 MySqlCommand^ update_section = gcnew MySqlCommand("UPDATE `astzs_db`.`section` SET `name`='" + textBox17->Text + "' WHERE `id`='" + questionid[checkedListBox2->SelectedIndex][0] + "';", conDB);
						 try{
							 conDB->Open();
							 update_section->ExecuteNonQuery();
						 }
						 catch (Exception^ex){ MessageBox::Show(ex->Message); }
						 conDB->Close();
						 checkBox5->Checked = false;
						 checkedListBox1_SelectedIndexChanged(sender, e);
						 checkedListBox2->SetItemChecked(checkedListBox2->Items->IndexOf(textBox17->Text), true);
						 textBox17->Text = "";
					 }
				 }
				 }
			 }

			 else if (checkBox6->Checked == true)
			 {
				 if (textBox16->Text == ""){ MessageBox::Show("А название категории?"); }
				 if (textBox16->Text != "")
				 {
					 MySqlCommand^ create_category = gcnew MySqlCommand(" INSERT INTO `astzs_db`.`category` (`category name`) VALUES ('" + textBox16->Text + "');", conDB);
					 try{
						 conDB->Open();
						 create_category->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox6->Checked = false;
					 checkedListBox1->Items->Clear();
					 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = loading_category->ExecuteReader();
						 while (Reader->Read())
						 {
							 checkedListBox1->Items->Add(Reader->GetValue(1)->ToString());
							 flag++;

						 }
						 if (flag != 0){
							 checkedListBox1->SelectedItem = textBox16->Text;
							 checkedListBox1->SetItemChecked(checkedListBox1->Items->IndexOf(textBox16->Text), true);
							 //checkedListBox1->CheckedItems[0];
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close(); textBox16->Text = "";
				 }
			 }

			 else if (checkBox7->Checked == true)
			 {
				 if (textBox17->Text == ""){ MessageBox::Show("А название подраздела?"); }
				 if (textBox17->Text != "")
				 {
					 int flag = 0;
					 MySqlCommand^ select_section = gcnew MySqlCommand("select * from `astzs_db`.`section` where `name`='" + textBox17->Text + "' && `category`='" + checkedListBox1->SelectedItem + "';", conDB);
					 try{
						 conDB->Open();
						 Reader = select_section->ExecuteReader();
						 while (Reader->Read())
						 {
							 flag++;
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();

					 if (flag > 0){ MessageBox::Show("Дубликатить вздумал?"); }
					 else{

						 MySqlCommand^ update_section = gcnew MySqlCommand("INSERT INTO `astzs_db`.`section` (`name`, `category`) VALUES ('" + textBox17->Text + "', '" + checkedListBox1->SelectedItem + "');", conDB);
						 try{
							 conDB->Open();
							 update_section->ExecuteNonQuery();
						 }
						 catch (Exception^ex){ MessageBox::Show(ex->Message); }
						 conDB->Close();
						 checkBox5->Checked = false;
						 checkedListBox1_SelectedIndexChanged(sender, e);
						 checkedListBox2->SetItemChecked(checkedListBox2->Items->IndexOf(textBox17->Text), true);
						 textBox17->Text = "";
					 }
				 }
			 }


			 else if (checkBox8->Checked == true)
			 {
				 if (checkedListBox1->CheckedItems->Count == 0)
				 {
					 MessageBox::Show("Вы не выбрали ни одной категории для удаления!");
				 }
				 else
				 {
					 String^ delete_c;
					 for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++)
					 {
						 if (i == 0)
						 {
							 delete_c = "DELETE FROM `astzs_db`.`category` WHERE `category name`='" + checkedListBox1->CheckedItems[i] + "'";
							 if (i == checkedListBox1->CheckedItems->Count - 1){ delete_c += ";"; }
						 }
						 if (i != 0 && i != checkedListBox1->CheckedItems->Count - 1)
						 {
							 delete_c += " || `category name`='" + checkedListBox1->CheckedItems[i] + "'";
						 }
						 if (i != 0 && i == checkedListBox1->CheckedItems->Count - 1)
						 {
							 delete_c += " || `category name`='" + checkedListBox1->CheckedItems[i] + "';";
						 }
					 }MessageBox::Show(delete_c);
					 MySqlCommand^ delete_category = gcnew MySqlCommand(delete_c, conDB);
					 try{
						 conDB->Open();
						 delete_category->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox8->Checked = false;
					 checkedListBox1->Items->Clear();
					 checkedListBox2->Items->Clear();
					 checkedListBox3->Items->Clear();
					 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = loading_category->ExecuteReader();
						 while (Reader->Read())
						 {
							 checkedListBox1->Items->Add(Reader->GetValue(1)->ToString());
							 flag++;

						 }
						 if (flag != 0){
							 checkedListBox1->SelectedIndex = 0;
							 checkedListBox1->SetItemChecked(0, true);
							 //checkedListBox1->CheckedItems[0];
						 }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();

				 }


			 }
			 else if (checkBox9->Checked == true)
			 {
				 if (checkedListBox2->CheckedItems->Count == 0)
				 {
					 MessageBox::Show("Опаньки! - Вы не выбрали ни одной подкатегории для удаления!");
				 }
				 else
				 {
					 String^ delete_c;
					 for (int i = 0; i < checkedListBox2->CheckedItems->Count; i++)
					 {
						 if (i == 0)
						 {
							 delete_c = "DELETE FROM `astzs_db`.`section` WHERE `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "'";
							 if (i == checkedListBox2->CheckedItems->Count - 1){ delete_c += ";"; }
						 }
						 if (i != 0 && i != checkedListBox2->CheckedItems->Count - 1)
						 {
							 delete_c += " || `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "'";
						 }
						 if (i != 0 && i == checkedListBox2->CheckedItems->Count - 1)
						 {
							 delete_c += " || `id`='" + questionid[checkedListBox2->CheckedIndices[i]][0] + "';";
						 }
					 }MessageBox::Show(delete_c);
					 MySqlCommand^ delete_category = gcnew MySqlCommand(delete_c, conDB);
					 try{
						 conDB->Open();
						 delete_category->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox9->Checked = false;
					 checkedListBox1_SelectedIndexChanged(sender, e);
				 }
			 }
			 else{ MessageBox::Show("Над ченить выбрать!");}



}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox4->Checked == true)
			 {

				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
				 textBox16->Text = checkedListBox1->SelectedItem->ToString();
			 }
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox5->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
				 textBox17->Text = checkedListBox2->SelectedItem->ToString();
			 }



}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox6->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
			 }





}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox7->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox8->Checked = false;
				 checkBox9->Checked = false;
			 }






}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox8->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox9->Checked = false;
			 }



}
private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox9->Checked == true)
			 {
				 checkBox2->Checked = false;
				 checkBox3->Checked = false;
				 checkBox5->Checked = false;
				 checkBox4->Checked = false;
				 checkBox6->Checked = false;
				 checkBox7->Checked = false;
				 checkBox8->Checked = false;
			 }
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible = false;
			 groupBox4->Visible = true;
			 ClientSize = System::Drawing::Size(461, 587);
			 groupBox4->Location = System::Drawing::Point(12, 12);
			 comboBox6->Items->Clear();
			 comboBox6->Items->Add("Зачет");
			 comboBox6->Items->Add("Оценка");
			 comboBox6->SelectedIndex = 0;
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 comboBox7->Items->Clear();
			 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_category->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox7->Items->Add(Reader->GetValue(1)->ToString());
					 flag++;

				 }
				 if (flag != 0){ comboBox7->SelectedIndex = 0; }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (comboBox6->SelectedItem == "Зачет")
			 {
				 textBox20->Text = "0";
				 textBox21->Text = "0";
				 textBox20->ReadOnly = true;
				 textBox21->ReadOnly = true;
			 }
			 if (comboBox6->SelectedItem == "Оценка")
			 {
				 textBox20->Text = "";
				 textBox21->Text = "";
				 textBox20->ReadOnly = false;
				 textBox21->ReadOnly = false;
			 }
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 if (checkBox1->Checked == false)
			 {
				 listBox2->Items->Clear();
				 MySqlCommand^ loading_test = gcnew MySqlCommand("select * from `astzs_db`.`test` where `category`='" + comboBox7->SelectedItem + "';", conDB);
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_test->ExecuteReader();
					 while (Reader->Read())
					 {
						 listBox2->Items->Add(Reader->GetValue(7)->ToString());
						 questionid[flag][0] = Reader->GetInt32(0);
						 flag++;

					 }
					 if (flag != 0){ listBox2->SelectedIndex = 0; }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
			 }
			 checkedListBox4->Items->Clear();
			 MySqlCommand^ loading_test = gcnew MySqlCommand("select * from `astzs_db`.`section` where `category`='" + comboBox7->SelectedItem + "';", conDB);
			 try{
				 int flag = 0;
				 conDB->Open();
				 Reader = loading_test->ExecuteReader();
				 while (Reader->Read())
				 {
					 checkedListBox4->Items->Add(Reader->GetValue(1)->ToString());
					 questionid[flag][1] = Reader->GetInt32(0);
					 flag++;

				 }
				 if (flag != 0){ checkedListBox4->SelectedIndex = 0; }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 int bul = 0;
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 if (checkBox10->Checked == false)
			 {
				 if (textBox18->Text == "" || textBox19->Text == "" ||
					 textBox20->Text == "" || textBox21->Text == "" ||
					 textBox22->Text == "" || textBox23->Text == "" ||
					 textBox24->Text == ""){
					 MessageBox::Show("Одно из полей пустует!");
				 }
				 for (int i = 19; i < 25; i++)
				 {
					 String^ test;
					 switch (i)
					 {
					 case 19:{test = textBox19->Text; }break;
					 case 20:{test = textBox20->Text; }break;
					 case 21:{test = textBox21->Text; }break;
					 case 22:{test = textBox22->Text; }break;
					 case 23:{test = textBox23->Text; }break;
					 case 24:{test = textBox24->Text; }break;
					 }
					 for (int j = 0; j < test->Length; j++)
					 {
						 if (test[j] != '0' && test[j] != '1' && test[j] != '2' && test[j] != '3' && test[j] != '4' && test[j] != '5' && test[j] != '6' && test[j] != '7' && test[j] != '8' && test[j] != '9')
						 {
							 bul = 1;
						 }
					 }
				 }
				 if (bul != 0){ MessageBox::Show("Внимательней! - ошибки в заполнении полей"); }
				 if (checkedListBox4->CheckedItems->Count == 0){ MessageBox::Show("Опаньки! вы не выбрали ниодного подраздела,а если их нет, то и вопросов нет соответственно!"); bul = 1; }

				 if (bul == 0)
				 {
					 MySqlCommand^ get_test = gcnew MySqlCommand("select * from `astzs_db`.`test` where `name`='" + textBox18->Text + "' && `category`='" + comboBox7->SelectedItem + "';", conDB);
					 try{
						 int flag = 0;
						 conDB->Open();
						 Reader = get_test->ExecuteReader();
						 while (Reader->Read())
						 {
							 if (checkBox1->Checked == true && Reader->GetInt32(0)!=questionid[listBox2->SelectedIndex][0])
							 {
								 flag++;
							 }
							 if (checkBox1->Checked == false)
							 {
								 flag++;
							 }
						 }if (flag != 0){ MessageBox::Show("Дубликатим! такой тест уже есть!"); bul = 1; }
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
				 }
			 }


					 if (checkBox1->Checked == false && checkBox10->Checked==false)
					 {
					 if (bul == 0)
					 {
						 int z;
						 if (comboBox6->SelectedItem == "Зачет"){ z = 0; }
						 if (comboBox6->SelectedItem == "Оценка"){ z = 1; }
						 String^ section = "";
						 for (int i=0; i < checkedListBox4->CheckedItems->Count; i++)
						 {
							 if (i == 0){ section = Convert::ToString(questionid[checkedListBox4->CheckedIndices[i]][1]); }
							 if (i != 0){ section += " " + questionid[checkedListBox4->CheckedIndices[i]][1] + ""; }
						 }MessageBox::Show(section);
						 MySqlCommand^ create_test = gcnew MySqlCommand("INSERT INTO `astzs_db`.`test` (`time`, `Z/O`, `3`, `4`, `5`, `nqestion`, `name`, `category`, `sectionids`, `attempts`) VALUES ('" + textBox22->Text + "', '" + z + "', '" + textBox19->Text + "', '" + textBox20->Text + "', '" + textBox21->Text + "', '" + textBox23->Text + "', '" + textBox18->Text + "', '" + comboBox7->SelectedItem + "', '" + section + "', '" + textBox24->Text + "');", conDB);
						 try{
							 conDB->Open();
							 create_test->ExecuteNonQuery();
						 }
						 catch (Exception^ex){ MessageBox::Show(ex->Message); }
						 conDB->Close();
						 comboBox7_SelectedIndexChanged(sender, e);
					 }
				 }
				 
					 if (checkBox1->Checked == true && bul == 0)
					 {
						 if (bul == 0)
						 {
							 int z;
							 if (comboBox6->SelectedItem == "Зачет"){ z = 0; }
							 if (comboBox6->SelectedItem == "Оценка"){ z = 1; }
							 String^ section = "";
							 for (int i = 0; i < checkedListBox4->CheckedItems->Count; i++)
							 {
								 if (i == 0){ section = Convert::ToString(questionid[checkedListBox4->CheckedIndices[i]][1]); }
								 if (i != 0){ section += " " + questionid[checkedListBox4->CheckedIndices[i]][1] + ""; }
							 }MessageBox::Show(section);
							 MySqlCommand^ update_test = gcnew MySqlCommand("UPDATE `astzs_db`.`test` SET `time`='" + textBox22->Text + "', `Z/O`='" + z + "', `3`='" + textBox19->Text + "', `4`='" + textBox20->Text + "', `5`='" + textBox21->Text + "', `nqestion`='" + textBox23->Text + "', `name`='" + textBox18->Text + "', `category`='" + comboBox7->SelectedItem + "', `sectionids`='" + section + "', `attempts`='" + textBox24->Text + "' WHERE `id`='" + questionid[listBox2->SelectedIndex][0] + "';", conDB);
							 try{
								 conDB->Open();
								 update_test->ExecuteNonQuery();
							 }
							 catch (Exception^ex){ MessageBox::Show(ex->Message); }
							 conDB->Close();
							 checkBox1->Checked = false;
							 comboBox7_SelectedIndexChanged(sender, e);
						 }
					 }

					 if (checkBox10->Checked==true)
					 {
						 if (listBox2->Items->Count == 0){ MessageBox::Show("Нечего удалять!"); }
						 else{
							 MySqlCommand^ delete_test = gcnew MySqlCommand("DELETE FROM `astzs_db`.`test` WHERE `id`='" + questionid[listBox2->SelectedIndex][0] + "';", conDB);
							 try{
								 conDB->Open();
								 delete_test->ExecuteNonQuery();
							 }
							 catch (Exception^ex){ MessageBox::Show(ex->Message); }
							 conDB->Close();
							 checkBox10->Checked = false;
							 comboBox7_SelectedIndexChanged(sender, e);
						 }
					 }

}
private: System::Void listBox2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 checkBox1->Checked = true;
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ loading_test = gcnew MySqlCommand("select * from `astzs_db`.`test` where `id`='" +questionid[listBox2->SelectedIndex][0]  + "';", conDB);
			 try{
				 conDB->Open();
				 Reader = loading_test->ExecuteReader();
				 while (Reader->Read())
				 {
					 if (Reader->GetInt32(2) == 0){ comboBox6->SelectedItem = "Зачет"; }
					 else{ comboBox6->SelectedItem = "Оценка"; }
					 comboBox7->SelectedItem = Reader->GetValue(8)->ToString();
					 comboBox7_SelectedIndexChanged(sender, e);
					 String^ testid = Reader->GetValue(9)->ToString();
					 MessageBox::Show(testid);
					 String^ ID;
					 for (int i = 0; i < testid->Length; i++)
					 {
						 if (i == 0 || testid[i - 1] == ' '){ ID = Convert::ToString(testid[i]); }
						 if (i != 0 && testid[i - 1] != ' ' && testid[i] != ' '){ ID += Convert::ToString(testid[i]);}
						 if (testid[i] == ' ' || i == testid->Length - 1)
						 {MessageBox::Show(ID); 
						 for (int j = 0; j < checkedListBox4->Items->Count; j++)
						 {
							 if (questionid[checkedListBox4->Items->IndexOf(checkedListBox4->Items[j])][1] == Convert::ToInt32(ID))
							 {
								 checkedListBox4->SetItemChecked(checkedListBox4->Items->IndexOf(checkedListBox4->Items[j]), true);
							 }
						 }
						 }
					 }				 
					 textBox18->Text = Reader->GetValue(7)->ToString();
					 textBox19->Text = Reader->GetValue(3)->ToString();
					 textBox20->Text = Reader->GetValue(4)->ToString();
					 textBox21->Text = Reader->GetValue(5)->ToString();
					 textBox22->Text = Reader->GetValue(1)->ToString();
					 textBox23->Text = Reader->GetValue(6)->ToString();
					 textBox24->Text = Reader->GetValue(10)->ToString();
			
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox1->Checked == true){ checkBox10->Checked = false; }
}
private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox10->Checked == true){ checkBox1->Checked = false; }
}

private: System::Void listBox3_update(System::Object^  sender, System::EventArgs^  e) {
			 listBox3->Items->Clear();
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ loading_group = gcnew MySqlCommand("select * from `astzs_db`.`group`;", conDB);
			 int flag = 0;
			 try{
				 conDB->Open();
				 Reader = loading_group->ExecuteReader();
				 while (Reader->Read())
				 {
					 listBox3->Items->Add(Reader->GetValue(1)->ToString());
					 flag++;

				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
			 if (checkBox11->Checked == true || checkBox12->Checked == true)
			 {
				 listBox3->SelectedItem = textBox25->Text;
				 listBox3_SelectedIndexChanged(sender, e);
				 textBox25->Text = "";
			 }
			 else if (flag!=0){ listBox3->SelectedIndex = 0; listBox3_SelectedIndexChanged(sender, e); }
}

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 if (checkBox11->Checked == true)
			 {
				 if (textBox25->Text == ""){ MessageBox::Show("Вы не ввели имя новой группы!"); }
				 else{
					 MySqlCommand^ create_group = gcnew MySqlCommand("INSERT INTO `astzs_db`.`group` (`name`) VALUES ('"+textBox25->Text+"');", conDB);
					 try{
						 conDB->Open();
						 create_group->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 listBox3_update(sender, e);
				 }
			 }
			 else if (checkBox12->Checked == true)
			 {
				 if (textBox25->Text == ""){ MessageBox::Show("Вы не ввели новое имя группы!"); }
				 else if (listBox3->Items->Count == 0){ MessageBox::Show("Переименовывать нечего!"); }
				 else{
					 MySqlCommand^ update_group = gcnew MySqlCommand("UPDATE `astzs_db`.`group` SET `name`='"+textBox25->Text+"' WHERE `name`='"+listBox3->SelectedItem+"';", conDB);
					 try{
						 conDB->Open();
						 update_group->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 listBox3_update(sender, e);
				 }
			 }
			 else if (checkBox13->Checked == true)
			 {
				 comboBox8->SelectedItem = "ALL";
				 comboBox9->SelectedItem = "ALL";
				 listBox3_SelectedIndexChanged(sender, e);
				 if (listBox3->Items->Count == 0){ MessageBox::Show("Удалять нечего!"); }
				 else if (checkedListBox3->Items->Count == 0){MessageBox::Show("В группе имеются пользователи - удаление невозможно!"); }
				 else{
					 MySqlCommand^ delete_group = gcnew MySqlCommand("delete from `astzs_db`.`group` where `name`='" + listBox3->SelectedItem + "';", conDB);
					 try{
						 conDB->Open();
						 delete_group->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 listBox3_update(sender, e);
				 }
			 }
			 else if (checkBox14->Checked == true)
			 {
				 if (checkedListBox5->CheckedItems->Count == 0){ MessageBox::Show("Нет отмеченых пользователей!"); }
				 else if (comboBox8->SelectedItem == "ALL" || comboBox9->SelectedItem == "ALL"){ MessageBox::Show("Вы не выбрали отделение/курс!"); }
				 else 
				 {
					 String^ update_us;
					 for (int i = 0; i < checkedListBox5->CheckedItems->Count; i++)
					 {
						 if (i == 0){
							 update_us = "UPDATE `astzs_db`.`users` SET `course`='" + Convert::ToInt32(comboBox9->SelectedItem) + "', `group`='" + listBox3->SelectedItem + "', `Mode of study`='" + comboBox8->SelectedItem + "' WHERE `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "'";
							 if (i == checkedListBox5->CheckedItems->Count - 1){ update_us += ";"; }
						 }
						 if (i != 0 && i != checkedListBox5->CheckedItems->Count - 1){ update_us += " || `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "'"; }
						 if (i != 0 && i == checkedListBox5->CheckedItems->Count - 1){ update_us += " || `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "';"; }
					 }MessageBox::Show(update_us);
					 MySqlCommand^ update_users = gcnew MySqlCommand(update_us, conDB);
					 try{
						 conDB->Open();
						 update_users->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox14->Checked = false;
					 listBox3_SelectedIndexChanged(sender, e);
				 }
			 }
			 else if (checkBox15->Checked == true)
			 {
				 if (checkedListBox5->CheckedItems->Count == 0){ MessageBox::Show("Нет отмеченых пользователей!"); }
				 else
				 {
					 String^ delete_us;
					 for (int i = 0; i < checkedListBox5->CheckedItems->Count; i++)
					 {
						 if (i == 0){
							 delete_us = "delete from `astzs_db`.`users` WHERE `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "'";
							 if (i == checkedListBox5->CheckedItems->Count - 1){ delete_us += ";"; }
						 }
						 if (i != 0 && i != checkedListBox5->CheckedItems->Count - 1){ delete_us += " || `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "'"; }
						 if (i != 0 && i == checkedListBox5->CheckedItems->Count - 1){ delete_us += " || `id`='" + questionid[checkedListBox5->CheckedIndices[i]][0] + "';"; }
					 }MessageBox::Show(delete_us);
					 MySqlCommand^ delete_users = gcnew MySqlCommand(delete_us, conDB);
					 try{
						 conDB->Open();
						 delete_users->ExecuteNonQuery();
					 }
					 catch (Exception^ex){ MessageBox::Show(ex->Message); }
					 conDB->Close();
					 checkBox15->Checked = false;
					 listBox3_SelectedIndexChanged(sender, e);
				 }
			 }
			 else{ MessageBox::Show("Выберите действие!"); }		 
}

private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox14->Checked == false && checkBox15->Checked == false)
			 {
				 checkedListBox5->Items->Clear();
				 String^ US;
				 US = "select * from `astzs_db`.`users` where `group`='"+listBox3->SelectedItem+"'";
				 if (comboBox8->SelectedItem == "ALL" && comboBox9->SelectedItem == "ALL")
				 {
					 US += ";";
				 }
				 else if (comboBox8->SelectedItem != "ALL" && comboBox9->SelectedItem != "ALL")
				 {
					 US += " && `Mode of study`='" + comboBox8->SelectedItem + "' && `course`='" + comboBox9->SelectedItem + "';";
				 }
				 else if (comboBox8->SelectedItem == "ALL" && comboBox9->SelectedItem != "ALL")
				 {
					 US += " &&  `course`='" + comboBox9->SelectedItem + "';";
				 }
				 else if (comboBox8->SelectedItem != "ALL" && comboBox9->SelectedItem == "ALL")
				 {
					 US += " && `Mode of study`='" + comboBox8->SelectedItem + "';";
				 }

				 String^ con = gcnew String(connection.c_str());
				 MySqlConnection^ conDB = gcnew MySqlConnection(con);
				 MySqlDataReader^ Reader;
				 MySqlCommand^ loading_user = gcnew MySqlCommand(US, conDB);
				 try{
					 int flag = 0;
					 conDB->Open();
					 Reader = loading_user->ExecuteReader();
					 while (Reader->Read())
					 {
						 checkedListBox5->Items->Add("| " + Reader->GetValue(5)->ToString() + " | Шифр = " + Reader->GetInt32(3) + " |");
						 questionid[flag][0] = Reader->GetInt32(0);
						 flag++;
					 }
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
			 }
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible = false;
			 groupBox5->Visible = true;
			 ClientSize = System::Drawing::Size(612, 635);
			 groupBox5->Location = System::Drawing::Point(12, 12);
			 comboBox8->Items->Clear();
			 comboBox8->Items->Add("ALL");
			 comboBox8->Items->Add("очное");
			 comboBox8->Items->Add("очно-заочное");
			 comboBox8->Items->Add("заочное");
			 comboBox8->SelectedItem = "ALL";
			 comboBox9->Items->Clear();
			 comboBox9->Items->Add("ALL");
			 comboBox9->SelectedItem = "ALL";
			 for (int i = 1; i < 7; i++)
			 {
				 comboBox9->Items->Add(i);
			 }
			 listBox3_update(sender, e);
			 textBox25->ReadOnly = true;


}
private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox3_SelectedIndexChanged(sender, e);

}
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox3_SelectedIndexChanged(sender, e);
}
private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox11->Checked == true)
			 {
				 checkBox12->Checked = false;
				 checkBox13->Checked = false;
				 checkBox14->Checked = false;
				 checkBox15->Checked = false;
				 textBox25->ReadOnly = false;
			 }
			 if (checkBox11->Checked == false)
			 {
				 textBox25->ReadOnly = true;
			 }
}
private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox12->Checked == true)
			 {
				 checkBox11->Checked = false;
				 checkBox13->Checked = false;
				 checkBox14->Checked = false;
				 checkBox15->Checked = false;
				 textBox25->ReadOnly = false;
			 }
			 if (checkBox12->Checked == false)
			 {
				 textBox25->ReadOnly = true;
			 }
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox13->Checked == true)
			 {
				 checkBox12->Checked = false;
				 checkBox11->Checked = false;
				 checkBox14->Checked = false;
				 checkBox15->Checked = false;
				 textBox25->ReadOnly = true;
			 }
}
private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox14->Checked == true)
			 {
				 checkBox12->Checked = false;
				 checkBox13->Checked = false;
				 checkBox11->Checked = false;
				 checkBox15->Checked = false;
				 textBox25->ReadOnly = true;
			 }
}
private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkBox15->Checked == true)
			 {
				 checkBox12->Checked = false;
				 checkBox13->Checked = false;
				 checkBox14->Checked = false;
				 checkBox11->Checked = false;
				 textBox25->ReadOnly = true;
			 }
}

		 MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		 DataTable^ dbdataset = gcnew DataTable();

private: System::Void test_update(System::Object^  sender, System::EventArgs^  e) {
			 String^ result;
			 result = "select * from `astzs_db`.`results` where `category`='" + comboBox10->SelectedItem + "'";
			 if (comboBox11->SelectedItem != "ALL"){ result += " && `test name`='" + comboBox11->SelectedItem + "'"; }
			 if (comboBox12->SelectedItem != "ALL"){ result += " && `Mode of study`='" + comboBox12->SelectedItem + "'"; }
			 if (comboBox13->SelectedItem != "ALL"){ result += " && `group`='" + comboBox13->SelectedItem + "'"; }
			 if (comboBox14->SelectedItem != "ALL"){ result += " && `kurse`='" + comboBox14->SelectedItem + "'"; }
			 result += ";";
			// MessageBox::Show(result);
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ load_test = gcnew MySqlCommand(result, conDB);
			 dbdataset->Clear(); 
				 try{	
					 conDB->Open();
					 sda->SelectCommand = load_test;
					 sda->Fill(dbdataset);
					 dataGridView1->DataSource = dbdataset;
				 }
				 catch (Exception^ex){ MessageBox::Show(ex->Message); }
				 conDB->Close();
}


private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 MySqlCommandBuilder^ scb = gcnew MySqlCommandBuilder(sda);
			 sda->Update(dbdataset);
			 test_update( sender,  e);
}


private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible = false;
			 groupBox6->Visible = true;
			 ClientSize = System::Drawing::Size(673, 407);
			 groupBox6->Location = System::Drawing::Point(12, 12);
			 comboBox10->Items->Clear();
			 comboBox12->Items->Clear();
			 comboBox13->Items->Clear();
			 comboBox14->Items->Clear();
			 comboBox12->Items->Add("ALL");
			 comboBox12->SelectedItem="ALL";
			 comboBox12->Items->Add("очное");
			 comboBox12->Items->Add("очно-заочное");
			 comboBox12->Items->Add("заочное");
			 comboBox13->Items->Add("ALL");
			 comboBox13->SelectedItem="ALL";
			 comboBox14->Items->Add("ALL");
			 comboBox14->SelectedItem="ALL";
			 for (int i = 1; i < 7;i++)
			 {
				 comboBox14->Items->Add(i);
			 }
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ loading_group = gcnew MySqlCommand("select * from `astzs_db`.`group`;", conDB);
			 try{
				 conDB->Open();
				 Reader = loading_group->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox13->Items->Add(Reader->GetValue(1)->ToString());
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();

			 MySqlCommand^ loading_category = gcnew MySqlCommand("select * from `astzs_db`.`category`;", conDB);
			 try{
				 conDB->Open();
				 int flag = 0;
				 Reader = loading_category->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox10->Items->Add(Reader->GetValue(1)->ToString());
					 flag++;
				 }if (flag != 0){ comboBox10->SelectedIndex = 0; comboBox10_SelectedIndexChanged(sender, e); }
				 else{ MessageBox::Show("Не найдено категорий!"); }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();

			// test_update(sender, e);
			//MySqlCommandBuilder^ scb = gcnew MySqlCommandBuilder(sda);
			//sda->Update(dbdataset);
}
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox11->Items->Clear();
			 comboBox11->Items->Add("ALL");
			 String^ con = gcnew String(connection.c_str());
			 MySqlConnection^ conDB = gcnew MySqlConnection(con);
			 MySqlDataReader^ Reader;
			 MySqlCommand^ loading_test = gcnew MySqlCommand("select * from `astzs_db`.`test` where `category`='"+comboBox10->SelectedItem+"';", conDB);
			 try{
				 conDB->Open();
				 Reader = loading_test->ExecuteReader();
				 while (Reader->Read())
				 {
					 comboBox11->Items->Add(Reader->GetValue(7)->ToString());
				 }
			 }
			 catch (Exception^ex){ MessageBox::Show(ex->Message); }
			 conDB->Close();
			 comboBox11->SelectedItem = "ALL";
			 test_update(sender, e);
}
private: System::Void comboBox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 test_update(sender, e);
}
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 test_update(sender, e);
}
private: System::Void comboBox13_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 test_update(sender, e);
}
private: System::Void comboBox14_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 test_update(sender, e);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 defaultres();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 defaultres();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 defaultres();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 defaultres();
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 defaultres();
}
};
}
