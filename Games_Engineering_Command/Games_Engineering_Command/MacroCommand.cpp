#include "stdafx.h"
#include "MacroCommand.h"
#include "Command.h"
#include "Empty.h"
#include <iterator>
#include <list>

using namespace std; 

void MacroCommand::Execute() {
	typedef list<Command> commandsList;

	for (auto it = commands->begin(); it != commands->end(); ++it)
	{
		Command* com = *it;
		com->Execute();
	}
}

void MacroCommand::add(Command *c) {
	auto it = commands->end();
	commands->insert(it, c);
}

void MacroCommand::remove(Command *c) {
	commands->remove(c);
}

void MacroCommand::Redo() {
	if (commands->size() > 1) {
		commands->back()->Execute();
	}
}

void MacroCommand::Undo() {
	if (commands->size() > 1) {
		commands->back()->Execute();
		commands->pop_back();
	}
}

MacroCommand::MacroCommand()
{
	Command* emptyCommand = new Empty;
	commands = new list<Command*>{ emptyCommand };
}


MacroCommand::~MacroCommand()
{
}
