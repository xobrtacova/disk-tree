#include "headers.h"
#include "cmd_Handlers.h"
#include "cmd_Parse.h"
#include "tree_Node.h"
#include <iostream>
#include <fstream>

#ifdef _DEBUG
#define new DBG_NEW
#endif

using namespace cmd;
using namespace tree;

Handler cmd::Touch(const Options & options)
{
	return[size = options.size, path = options.path](Node * node, std::ostream & out)
	{
		std::ofstream outfile(path);

		int pocet = atoi(size.c_str());
		for (int i = 0; i < pocet; i++)
			outfile << '1';
		outfile.close();

		return true;
	};
}