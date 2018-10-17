#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class Melee : public Command
{
public:
	virtual void Execute() { melee(); }
	virtual void Undo() { undoMelee(); }

	void melee() {
		cout << "Fighting!" << endl;
	}

	void undoMelee() {
		cout << "undo Fighting!" << endl;
	}
};