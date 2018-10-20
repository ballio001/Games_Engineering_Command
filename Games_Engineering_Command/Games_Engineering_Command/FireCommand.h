#pragma once

#include "Command.h"
#include <iostream>

using namespace std;
class FireCommand : public Command
{
public:
	virtual void execute() { fireGun(); }
	
	void fireGun() {
		cout << "Firing my Gun!" << endl;
	}
	
	virtual void undo()
	{
		cout << "Undo Fire" << endl;
	};
	virtual void redo()
	{
		cout << "Redo Fire" << endl;
	};
};