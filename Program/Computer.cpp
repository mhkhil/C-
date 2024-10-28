#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer()
{
	cout << "Create Computer" << endl;
}

void Computer::Use()
{
	Mouse::OnEnter();
	KeyBoard::OnEnter();
}

Computer::~Computer()
{
	cout << "Release Computer" << endl;
}
