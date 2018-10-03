#pragma once
#include "Command.h"

class InputHandler
{
public:
	void handleInput();

	InputHandler();
	~InputHandler();
private:
	Command* buttonA_;
	Command* buttonY_;
	Command* buttonX_;
	Command* buttonZ_;
	Command* buttonD_;
};

