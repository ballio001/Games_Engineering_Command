#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>
#include <windows.h>

using namespace std;

void InputHandler::handleInput()
{
	if (GetKeyState('A')) 
		buttonA_->execute();
	else if (GetKeyState('Y'))
		buttonY_->execute();
	else if (GetKeyState('X'))
		buttonX_->execute();
	else if (GetKeyState('Z'))
		buttonZ_->execute();
	else if (GetKeyState('D'))
		buttonD_->execute();
}

InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}
