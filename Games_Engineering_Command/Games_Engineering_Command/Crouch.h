#pragma once

#include "Command.h"
#include <iostream>

using namespace std;
class Crouch : public Command
{
public:
	virtual void execute() { crouch(); }

	void crouch() {
		cout << "Crouching!" << endl;
	}

	virtual void undo()
	{
		cout << "Undo Crouching" << endl;
	};
	virtual void redo()
	{
		cout << "Redo Crouching" << endl;
	};
};