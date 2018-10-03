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
};