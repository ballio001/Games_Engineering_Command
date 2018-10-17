#pragma once

#include "Command.h"
#include <iostream>

using namespace std;

class FireCommand : public Command
{
public:
	virtual void Execute() { fireGun(); }
	virtual void Undo() { undoFireGun(); }

	void fireGun() {
		cout << "Firing my Gun!" << endl;
	}

	void undoFireGun() {
		cout << "undo Firing my Gun!" << endl;
	}
};