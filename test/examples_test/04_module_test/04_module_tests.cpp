#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
//#include "catch.hpp"
//#include "while.h"
#include "value_ref.h"

// TEST_CASE("Verify Test Configuration", "verification") {
// 	REQUIRE(true == true);
// }

// TEST_CASE("test of sum squares function")
// {
// 	REQUIRE(sum_of_squares(3) == 14);
// 	REQUIRE(sum_of_squares(4) == 30);
// 	REQUIRE(sum_of_squares(5) == 55);
	
// }

// TEST_CASE("test of sum squares function 2")
// {
// 	REQUIRE(sum_of_squares_2(3) == 14);
// 	REQUIRE(sum_of_squares_2(4) == 30);
// 	REQUIRE(sum_of_squares_2(5) == 55);
	
// }

// TEST_CASE("get area test case")
// {
// 	REQUIRE(get_area(5,5)== 25);
// 	REQUIRE(get_area()==200);
// }

TEST_CASE("test value and ref parameters")
{
	int num1 = 0, num2 = 0;
	pass_by_val_and_ref(num1, num2);
	
	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);

}

