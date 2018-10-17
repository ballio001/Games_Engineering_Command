#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class Crouch : public Command
{
public:
	virtual void Execute() { crouch(); }
	virtual void Undo() { undoCrouch(); }

	void crouch() {
		cout << "Crouching!" << endl;
	}

	void undoCrouch() {
		cout << "Undo Crouching!" << endl;
	}
};