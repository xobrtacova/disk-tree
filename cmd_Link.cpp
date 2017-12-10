#include "headers.h"
#include "cmd_Handlers.h"
#include "cmd_Parse.h"
#include "tree_Node.h"
#include <iostream>
//#include <unistd.h>

#ifdef _DEBUG
#define new DBG_NEW
#endif

using namespace cmd;
using namespace tree;

Handler cmd::Link(const Options & options)
{
	return[name = options.name, path = options.path](Node * node, std::ostream & out)
	{
		//link("C://Users//Tatiana//Desktop//ar", "ar");
		return true;
	};
}