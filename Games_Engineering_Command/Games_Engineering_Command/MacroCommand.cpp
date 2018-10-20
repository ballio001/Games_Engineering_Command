
#include "stdafx.h"
#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{
	std::cout << "dtor" << std::endl;
}

void MacroCommand::add(Command* command)
{
	commands.push_back(command);
}

void MacroCommand::remove(Command* command)
{
	commands.remove(command);
}

void MacroCommand::undo()
{

	if (commands.size() > 0) {
		(*commands.rbegin())->undo(); //reverse begin
		redoCommands.push_back(*commands.rbegin()); //puts last item first
		commands.pop_back(); //removes last list item
	}
	else
	{
		std::cout << "Empty List" << std::endl;
	}
}

void MacroCommand::redo()
{
	if (redoCommands.size() > 0) {

		(*redoCommands.rbegin())->redo();
		commands.push_back(*redoCommands.rbegin()); //puts last item first
		redoCommands.pop_back(); //removes last list item
	}
	else {
		std::cout << "Empty List" << std::endl;
	}
}

void MacroCommand::execute()
{
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}//execute aslong as the iterator isn't the last command in the commands list

	std::cout << "Execution complete..." << std::endl;
}