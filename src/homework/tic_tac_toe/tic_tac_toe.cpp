//cpp
#include<iostream>
#include"tic_tac_toe.h"

using std::cout; using std::cin;

void Tic_Tac_Toe::start_game(string first_player)
{   
    player = first_player;
}

void Tic_Tac_Toe::mark_board(int position)
{
    peg[position - 1] = player;
    set_next_player();
}

void Tic_Tac_Toe::display_board() const
{
    for (size_t i = 0; i < peg.size(); i += 3)
    {
        cout<<" "<<peg[i]<<" | "<<peg[i + 1]<<" | "<<peg[i + 2]<<"\n";
        if(i < 6)
        {
            cout<<"-----------\n";
        }
    }
}

void Tic_Tac_Toe::set_next_player()
{
    cout<<"Tic_Tac_Toe::set_next_player()\n";

    if(player == "X")
    player = "O";  
    else 
    player = "X";
}

bool Tic_Tac_Toe::check_board_full()
{
    bool cbf = true;
    
    for (size_t i = 0; i < peg.size(); i++)
    {
        if(peg[i] == " ")
        cbf = false;
    }
    return cbf;
}

void Tic_Tac_Toe::clear_board()
{
    for (size_t i = 0; i < peg.size(); i++)
    {
        peg[i]= " ";
    }

} 

bool Tic_Tac_Toe::game_over()
{
    return check_board_full();
}