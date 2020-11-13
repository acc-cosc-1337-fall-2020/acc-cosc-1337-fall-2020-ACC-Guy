#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{	

	string input;

	do
	{
	cout<<"Please enter in a value of X or O\n";
	cin>>input;

	if(input == "X" || input ==  "O")
    {
        string player = input;
	}
	else
    {
        cout<<"This is not a valid entry.\n"<<"Please enter in a valid value.\n";	
    }  
	} while (input != "X" && input !=  "O");

	Tic_Tac_Toe t;
	t.start_game(input);
	
	int position;
	
	do{
    do
    {
       cout<<"Enter a position from 1 to 9.\n";  
       cin>>position;
	   
    }
    while(position > 10 || position < 0); 

	t.mark_board(position);
	t.display_board();
	}while(!t.game_over());

	return 0;
}