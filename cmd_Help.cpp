#include "headers.h"
#include "cmd_Handlers.h"
#include "cmd_Parse.h"
#include "tree_Node.h"

#ifdef _DEBUG
#define new DBG_NEW
#endif

using namespace cmd;
using namespace tree;

Handler cmd::Help(const Options & options)
{
	//todo: print command help

	return[command = options.path](Node * node, std::ostream & out) // node hlavny adresar, out vyparsovali sme
	{
		out << "help..." << std::endl;

		return true;
	};
}
