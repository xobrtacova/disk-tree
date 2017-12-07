#include "headers.h"
#include "cmd_Handlers.h"
#include "cmd_Parse.h"
#include "tree_Node.h"
#include <iostream>

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
		if (command == "")
			out << "Prikazy:\nquit\nlist\nsize\ntree\ndump\nrm\nmkdir\nlink\ntouch" << std::endl;
		else if (command == "quit")
			out << "Ukoncenie prace s aplikaciou." << std::endl;
		else if (command == "list")
			out << "Vypis definovaneho adresara (path) alebo hlaveho adresara (default), s moznostou sledovat linky (follow) alebo sa rekurzivne vnarat do adresarov (recursive)." << std::endl;
		else if (command == "size")
			out << "Vypis velkosti suboru/adresara, je moznost zahrnut odkazovane subory/adresare (follow) alebo rekurzivne pridat vnorene adresare (recursive)." << std::endl;
		else if (command == "tree")
			out << "Zobrazenie stromovej štruktury pre danu cestu (path) alebo pre hlavny adresar (default); zobrazenie podobne ako prikaz tree pre MS Windows." << std::endl;
		else if (command == "dump")
			out << "Vypis hierarchie danej cesty (default - hlavny adresar) v json formate." << std::endl;
		else if (command == "rm")
			out << "Zmazanie suboru/adresara/odkazu." << std::endl;
		else if (command == "mkdir")
			out << "Vytvorenie adresara." << std::endl;
		else if (command == "link")
			out << "Vytvorenie odkazu" << std::endl;
		else if (command == "touch")
			out << "Vytvorenie suboru (default velkost je 0B)." << std::endl;
		else
			out << "Prikaz nie je v ponuke!" << std::endl;

		return true;
	};

}
