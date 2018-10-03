#include "stdafx.h"
#include "MacroCommand.h"
#include "Command.h"
#include <iterator>
#include <list>

using namespace std; 

void MacroCommand::execute() {
	typedef list<Command> commandsList;

	for (auto it = commands->begin(); it != commands->end(); ++it)
	{
		Command* com = *it;
		com->execute();
	}
}

void MacroCommand::add(Command *c) {
	auto it = commands->end();
	commands->insert(it, c);
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
