#pragma once

#include "Command.h"
#include <iostream>

using namespace std;

class JumpCommand : public Command
{
public:
	virtual void Execute() { jump(); }
	virtual void Undo() { undoJump(); }

	void jump() {
		cout << "Jumping!" << endl;
	}
	void undoJump() {
		cout << "undo Jumping!" << endl;
	}
};