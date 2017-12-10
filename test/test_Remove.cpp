#include "gtest/gtest.h"

#include "../cmd_Handler.h"

#include <sstream>

TEST(Remove, Command)
{
	auto command = cmd::GetHandler("rm hvzgzu");
	EXPECT_NE(command, nullptr);

	std::stringstream str;

	EXPECT_TRUE(command(nullptr, str));
}