#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
}
// thank you.
//how do I run the test case? 

//not sure why i have these errors. 


TEST_CASE("Test overtime function")
{
	REQUIRE(overtime(20) == false);
	REQUIRE(overtime(40) == false);
	REQUIRE(overtime(41) == true);
}

TEST_CASE("if else")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(1775)== "Invalid year");
}