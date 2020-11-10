//cpp
#include<iostream>
#include"tic_tac_toe.h"

using std::cout; using std::cin;

void Tic_Tac_Toe::start_game(string first_player)
{   
    player = first_player;
    int position;

    while (!Tic_Tac_Toe::check_board_full())
    {
    
    do
    {
       cout<<"Enter a position from 1 to 9.\n";  
       cin>>position;
    }
    while(position > 10 || position < 0); 

    mark_board(position);
    display_board();
    set_next_player();
    check_board_full();
    }
}

void Tic_Tac_Toe::mark_board(int position)
{
    peg[position - 1] = player;
}

void Tic_Tac_Toe::display_board() const
{
    cout<<" "<<peg[0]<<" | "<<peg[1]<<" | "<<peg[2]<<"\n";
    cout<<"-----------\n";
    cout<<" "<<peg[3]<<" | "<<peg[4]<<" | "<<peg[5]<<"\n";
    cout<<"-----------\n";
    cout<<" "<<peg[6]<<" | "<<peg[7]<<" | "<<peg[8]<<"\n";
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