//cpp
#include<iostream>
#include"tic_tac_toe.h"

using std::cout; using std::cin;

//Requires validation: First_Player function argument must be X or O
void Tic_Tac_Toe::start_game(string first_player)
{   
    if(first_player == "X" || first_player ==  "O")
    {
        string player = first_player;

        //clear_board();
    }
    else
    {
        cout<<"This is not a valid entry.";
    }  

   while(check_board_full())
    //for (size_t i = 0; i < 9; i++)
    {
        cout<<"Enter a position from 1 to 9.\n";
        int position;
        cin>>position;
        cout<<"\n";
        mark_board(position);
        display_board();
    }
    else 
    clear_board();

}

void Tic_Tac_Toe::mark_board(int position)
{
    int row = position / 3;
    int col;

    if(position % 3 == 0)
    {
        col = 2;
        row = row - 1;
    }
    else 
    col = (position % 3) - 1;
    row = row - 1;

    peg[row][col]; //player;
    //set_next_player();
}

void Tic_Tac_Toe::display_board() const
{
    cout<<" "<<peg[0][0]<<" | "<<peg[0][1]<<" | "<<peg[0][2]<<"\n";
    cout<<"-----------\n";
    cout<<" "<<peg[1][0]<<" | "<<peg[1][1]<<" | "<<peg[1][2]<<"\n";
    cout<<"-----------\n";
    cout<<" "<<peg[2][0]<<" | "<<peg[2][1]<<" | "<<peg[2][2]<<"\n";
}

void Tic_Tac_Toe::set_next_player()
{
    if(player == "X")
    player = "O";  
    else 
    player = "X";
}

bool Tic_Tac_Toe::check_board_full()
{
    bool cbf;

    for (size_t i = 0; i < 3; i++)
         for (size_t j = 0; j < 3; j++)
    {
        if(peg[i][j] != "X" || peg[i][j] != "O" )
        cbf = 1;
        else 
        cbf = 0;
    }
    return cbf;
}

void Tic_Tac_Toe::clear_board()
{
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
    {
        peg[i][j] = " ";
    }
} 