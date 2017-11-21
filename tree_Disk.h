#pragma once

#include "tree_Folder.h"
#include <memory>

namespace tree
{
	tree::Folder * ParseDisk(rapidjson::Value & json);
	//std::unique_ptr<tree::Folder> ParseDisk(rapidjson::Value & json);
}
