#include "MyForm.h"
#include <conio.h>
#include <iostream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Quiz_And_Puzzles::MyForm form;
	form.Begin();
	//Application::Run(%form);

	int c = 0;
	while (1)
	{
		c = 0;

		switch ((c = getch())) {
		case KEY_UP:
			form.Move_Up();
			Application::Run(%form);
				break;
		case KEY_DOWN:
			form.Move_Down();   // key down
			break;
		case KEY_LEFT:
			form.Move_Left();  // key left
			break;
		case KEY_RIGHT:
			form.Move_Right();  // key right
			break;
		default:
			// not arrow
			break;
		}

	}
	
	return 0;
}
