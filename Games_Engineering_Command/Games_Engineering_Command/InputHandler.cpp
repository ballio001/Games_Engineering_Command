#include "stdafx.h"
#include <iostream>
#include "InputHandler.h"
#include "Command.h"
#include "Melee.h"
#include "JumpCommand.h"
#include "Crouch.h"
#include "FireCommand.h"
#include "Shield.h"
#include "MacroCommand.h"
#include <windows.h>

using namespace std;

bool isPressed = false;
MacroCommand* macroCommand = new MacroCommand;

void InputHandler::handleInput()
{
	Command* command;

	if (GetKeyState('A') & 0x8000) {
		if (!isPressed) {
			command = new Melee();
			command->Execute();
			macroCommand->add(command);
			isPressed = true;
		}
	}
	else if (GetKeyState('S') & 0x8000) {
		if (!isPressed) {
			command = new JumpCommand();
			command->Execute();
			macroCommand->add(command);
			isPressed = true;
		}
	}
	else if (GetKeyState('X') & 0x8000) {
		if (!isPressed) {
			command = new Crouch();
			macroCommand->add(command);
			command->Execute();
			isPressed = true;
		}
	}
	else if (GetKeyState('Z') & 0x8000) {
		if (!isPressed) {
			command = new Shield();
			macroCommand->add(command);
			command->Execute();
			isPressed = true;
		}
	}
	else if (GetKeyState('D') & 0x8000) {
		if (!isPressed) {
			command = new FireCommand();
			macroCommand->add(command);
			command->Execute();
			isPressed = true;
		}
	}
	else if (GetKeyState('1') & 0x8000) {
		if (!isPressed) {
			macroCommand->Execute();
			isPressed = true;
		}
	}
	else if (GetKeyState('2') & 0x8000) {
		if (!isPressed) {
			macroCommand->Redo();
			isPressed = true;
		}
	}
	else if (GetKeyState('3') & 0x8000) {
		if (!isPressed) {
			macroCommand->Undo();
			isPressed = true;
		}
	}
	else {
		isPressed = false;
	}
}

InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}
