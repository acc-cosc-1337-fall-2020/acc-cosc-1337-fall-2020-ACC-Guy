#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*** Homework 5 ***/

TEST_CASE("Testing start_game()"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(1);
	REQUIRE(t.game_over() == false);
	t.mark_board(2);
	REQUIRE(t.game_over() == false);
	t.mark_board(3);
	REQUIRE(t.game_over() == false);
	t.mark_board(4);
	REQUIRE(t.game_over() == false);
	t.mark_board(5);
	REQUIRE(t.game_over() == false);
	t.mark_board(7);
	REQUIRE(t.game_over() == false);
	t.mark_board(6);
	REQUIRE(t.game_over() == false);
	t.mark_board(9);
	REQUIRE(t.game_over() == false);
	t.mark_board(8);
	REQUIRE(t.game_over() == true);
}
/*** Homework 6 ***/

TEST_CASE("Test first player set to X")
{
	Tic_Tac_Toe t;
	t.start_game("X");
	REQUIRE(t.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	Tic_Tac_Toe t;
	t.start_game("O");
	REQUIRE(t.get_player() == "O");
}

TEST_CASE("Test win by first column"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(1);
	t.mark_board(2);
	t.mark_board(4);
	t.mark_board(3);
	t.mark_board(7);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win by second column"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(2);
	t.mark_board(1);
	t.mark_board(5);
	t.mark_board(3);
	t.mark_board(8);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win by third column"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(3);
	t.mark_board(1);
	t.mark_board(6);
	t.mark_board(2);
	t.mark_board(9);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win by first row"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(1);
	t.mark_board(5);
	t.mark_board(2);
	t.mark_board(4);
	t.mark_board(3);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win by second row"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(4);
	t.mark_board(1);
	t.mark_board(5);
	t.mark_board(2);
	t.mark_board(6);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win by third row"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(7);
	t.mark_board(1);
	t.mark_board(8);
	t.mark_board(2);
	t.mark_board(9);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win diagonally from top left"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(1);
	t.mark_board(3);
	t.mark_board(5);
	t.mark_board(2);
	t.mark_board(9);
	REQUIRE(t.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left"){
	Tic_Tac_Toe t;
	t.start_game("X");
	t.mark_board(7);
	t.mark_board(1);
	t.mark_board(5);
	t.mark_board(2);
	t.mark_board(3);
	REQUIRE(t.game_over() == true);
}