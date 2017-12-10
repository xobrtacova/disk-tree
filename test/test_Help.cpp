#include "gtest/gtest.h"

#include "../cmd_Handler.h"

#include <sstream>

TEST(Help, Command)
{
	auto command = cmd::GetHandler("help");
	EXPECT_NE(command, nullptr);

	std::stringstream str;

	EXPECT_TRUE(command(nullptr, str));
	EXPECT_FALSE(str.str().empty());
	
	str.str(std::string());
	auto quit = cmd::GetHandler("help quit");
	EXPECT_NE(quit, nullptr);
	EXPECT_TRUE(quit(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto list = cmd::GetHandler("help list");
	EXPECT_NE(list, nullptr);
	EXPECT_TRUE(list(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto size = cmd::GetHandler("help size");
	EXPECT_NE(size, nullptr);
	EXPECT_TRUE(size(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto tree = cmd::GetHandler("help tree");
	EXPECT_NE(tree, nullptr);
	EXPECT_TRUE(tree(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto dump = cmd::GetHandler("help dump");
	EXPECT_NE(dump, nullptr);
	EXPECT_TRUE(dump(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto rm = cmd::GetHandler("help rm");
	EXPECT_NE(rm, nullptr);
	EXPECT_TRUE(rm(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto mkdir = cmd::GetHandler("help mkdir");
	EXPECT_NE(mkdir, nullptr);
	EXPECT_TRUE(mkdir(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto link = cmd::GetHandler("help link");
	EXPECT_NE(link, nullptr);
	EXPECT_TRUE(link(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto touch = cmd::GetHandler("help touch");
	EXPECT_NE(touch, nullptr);
	EXPECT_TRUE(touch(nullptr, str));
	EXPECT_FALSE(str.str().empty());

	str.str(std::string());
	auto zly = cmd::GetHandler("help dsjndjs");
	EXPECT_NE(zly, nullptr);
	EXPECT_TRUE(zly(nullptr, str));
	EXPECT_FALSE(str.str().empty());
}
