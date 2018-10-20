#pragma once

#include "Command.h"
#include <iostream>

using namespace std;
class Shield : public Command
{
public:
	virtual void execute() { shield(); }

	void shield() {
		cout << "Shields Up!" << endl;
	}
	
	virtual void undo()
	{
		std::cout << "Undo Shield" << std::endl;
	};
	virtual void redo()
	{
		std::cout << "Redo Shield" << std::endl;
	};
};