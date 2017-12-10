#include "gtest/gtest.h"

#include "../cmd_Handler.h"

#include <sstream>

TEST(Touch, Command)
{
	auto command = cmd::GetHandler("touch ijfsg 4");
	EXPECT_NE(command, nullptr);

	std::stringstream str;

	EXPECT_TRUE(command(nullptr, str));
}
