#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
using namespace System;
using namespace Windows::Forms;
[STAThread]
void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ASTZSV2::MyForm form;
	Application::Run(%form);
}

namespace ASTZSV2
{
	System::Void MyForm::myform1load(System::Object^  sender, System::EventArgs^  e)
	{
		MyForm1^ f1 = gcnew MyForm1(this);
		f1->Location = MyForm::Location;
		f1->Show();
		this->Hide();	
	}

	System::Void MyForm::myform2load(System::Object^  sender, System::EventArgs^  e)
	{
		MyForm2^ f2 = gcnew MyForm2(this);
		f2->Location = MyForm::Location;
		f2->Show();
		this->Hide();
	}

    
}