#include "stdafx.h"
#include "MacroCommand.h"
#include "Command.h"
#include <iterator>
#include <list>

using namespace std; 

void MacroCommand::execute() {
	list<Command*>::iterator i(commands);
	for (i.First(); !i.IsDone();i.Next())
	{
		Command *c = i.CurrentItem();
		c->execute();
	}
}

void MacroCommand::add(Command *c) {
	commands->append(c);
}

void MacroCommand::remove(Command *c) {
	commands->remove(c);
}

MacroCommand::MacroCommand()
{
}


MacroCommand::~MacroCommand()
{
}
