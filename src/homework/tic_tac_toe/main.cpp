#include<iostream>
#include "tic_tac_toe.h"

//using std::cout; using std::endl; using std::vector;
using std::cout; using std::cin; using std::string;

int main() 
{	
	
	Tic_Tac_Toe t;
	t.display_board();

	string input;
	cout<<"Please enter in a value of X or O\n";
	cin>>input;

	t.start_game(input);

	return 0;
}