#pragma once
#include "Command.h"
#include <iostream>

using namespace std; 
class Empty : public Command
{
public:
	virtual void Execute() { cout << "Empty" << endl; }

};