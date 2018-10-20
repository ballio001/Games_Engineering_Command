#pragma once
#include "stdafx.h"
#include "Command.h"
#include "FireCommand.h"
#include "JumpCommand.h"
#include "Crouch.h"
#include "Melee.h"
#include "MacroCommand.h"
#include "Shield.h"
#include <SDL.h>

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void handleInput(SDL_Event & event);

private:
	Command * button1_;
	Command * button2_;
	Command * button3_;
	Command * button4_;
	Command * button5_;
	MacroCommand * macro;

};