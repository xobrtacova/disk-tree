#include "headers.h"
#include "tree_Disk.h"
#include "tree_Folder.h"
#include "tree_Link.h"

#include <stack>
#include <memory>

#ifdef _DEBUG
#define new DBG_NEW
#endif

std::unique_ptr<tree::Folder> tree::ParseDisk(rapidjson::Value & json)
{
	// parse disk hierarchy
	//Folder * root = dynamic_cast<Folder*>(Folder::Parse(json));
	auto root = Folder::Parse(json);

	if (!root)
		return nullptr;

	// resolve links
	std::stack<Folder *> folders;

	folders.push(root.get());

	while (!folders.empty())
	{
		Folder * folder = folders.top();
		folders.pop();
 		for (auto & node : folder->Content())
		{
			if (auto * subfolder = dynamic_cast<Folder*>(node.get()))
			{
				folders.push(subfolder);
			}
			else if (auto * link = dynamic_cast<Link *>(node.get()))
			{
				Node * ptr = root->Find(link->Path());
				if (ptr)
					link->Set(ptr);
			}
		}
	}

	return root;
}
