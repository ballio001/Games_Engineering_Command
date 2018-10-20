#pragma once

#include "Command.h"
#include <iostream>

using namespace std;
class JumpCommand : public Command
{
public:
	virtual void execute() { jump(); }

	void jump() {
		cout << "Jumping!" << endl;
	}
	
	virtual void undo()
	{
		cout << "Undo Jump" << endl;
	};
	virtual void redo()
	{
		cout << "Redo Jump" << endl;
	};
};