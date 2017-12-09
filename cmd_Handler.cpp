#include "headers.h"
#include "cmd_Handler.h"

#include "cmd_Parse.h"
#include "cmd_Handlers.h"

#ifdef _DEBUG
#define new DBG_NEW
#endif

using namespace cmd;
using namespace tree;

Handler cmd::GetHandler(const std::string & line)
{
	auto args = ParseOptions(line); // oznac fun. a pravym view call hierarchy
	if (!args)
		return nullptr;

	switch (args.value().first)
	{
		case Command::Help:
			return Help(args.value().second);
		case Command::Quit:
			return Quit;
		case Command::Size:
			return Size(args.value().second);
		case Command::List:
			return List(args.value().second);
		case Command::Remove:
			return Remove(args.value().second);
		case Command::MkDir:
			return MkDir(args.value().second);
		case Command::Link:
			return Link(args.value().second);
		case Command::Touch:
			return Touch(args.value().second);
	}

	return nullptr;
}

