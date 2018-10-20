#pragma once

#include "Command.h"
#include <iostream>
#include <list>
#include <string>
class MacroCommand : public Command {
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* command);
	virtual void remove(Command* command);
	virtual void execute();
	virtual void undo();
	virtual void redo();
private:
	std::list<Command*> commands;
	std::list<Command*> redoCommands;
};