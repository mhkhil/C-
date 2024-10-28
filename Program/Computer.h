#pragma once
#include "Keyboard.h"
#include "Mouse.h"

class Computer : public KeyBoard, Mouse
{
public:
	Computer();

	void Use();

	~Computer();
protected:

};

