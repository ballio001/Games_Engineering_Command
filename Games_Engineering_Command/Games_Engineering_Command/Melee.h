#pragma once

#include "Command.h"
#include <iostream>

using namespace std;
class Melee : public Command
{
public:
	virtual void execute() { melee(); }
	
	void melee() {
		cout << "Fighting!" << endl;
	}
	
	virtual void undo()
	{
		cout << "Undo Fighting" << endl;
	};
	virtual void redo()
	{
		cout << "Redo Fighting" << endl;
	};
};