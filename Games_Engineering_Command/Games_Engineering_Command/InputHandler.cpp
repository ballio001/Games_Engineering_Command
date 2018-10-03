#include "stdafx.h"
#include "InputHandler.h"
#include "Melee.h"
#include "JumpCommand.h"
#include "Crouch.h"
#include "FireCommand.h"
#include "Shield.h"
#include <iostream>
#include <windows.h>

using namespace std;

void InputHandler::handleInput()
{
	if (GetKeyState('A') & 0x8000) {
		buttonA_ = new Melee();
		buttonA_->execute();
	}
	else if (GetKeyState('Y') & 0x8000) {
		buttonY_ = new JumpCommand();
		buttonY_->execute();
	}
	else if (GetKeyState('X') & 0x8000) {
		buttonX_ = new Crouch();
		buttonX_->execute();
	}
	else if (GetKeyState('Z') & 0x8000) {
		buttonZ_ = new Shield();
		buttonZ_->execute();
	}
	else if (GetKeyState('D') & 0x8000) {
		buttonD_ = new FireCommand();
		buttonD_->execute();
	}
}

InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}
