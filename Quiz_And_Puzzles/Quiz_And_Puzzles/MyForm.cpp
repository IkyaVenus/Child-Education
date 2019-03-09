#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Quiz_And_Puzzles::MyForm form;
	form.Begin();
	Application::Run(%form);
	return 0;
}
