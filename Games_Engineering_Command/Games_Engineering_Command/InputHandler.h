#pragma once
#include "Command.h"

class InputHandler
{
public:
	void handleInput();

	// Methods to bind commands...


	InputHandler();
	~InputHandler();
private:
	Command* buttonA_;
	Command* buttonY_;
	Command* buttonX_;
	Command* buttonZ_;
};

