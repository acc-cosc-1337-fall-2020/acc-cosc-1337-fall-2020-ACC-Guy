#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing start_game()"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(1);
	t.mark_board(2);
	t.mark_board(3);
	t.mark_board(4);
	t.mark_board(5);
	t.mark_board(7);
	t.mark_board(6);
	t.mark_board(9);
	t.mark_board(8);
}
