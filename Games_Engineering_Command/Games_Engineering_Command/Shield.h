#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class Shield : public Command
{
public:
	virtual void Execute() { shield(); }
	virtual void Undo() { undoShield(); }

	void shield() {
		cout << "Shields Up!" << endl;
	}

	void undoShield() {
		cout << "Shields Deactivated!" << endl;
	}
};