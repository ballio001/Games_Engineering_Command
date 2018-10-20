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
		cout << "Undo Crouch" << endl;
	};
	virtual void redo()
	{
		cout << "Redo Crouch" << endl;
	};
};