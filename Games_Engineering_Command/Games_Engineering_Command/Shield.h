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
};