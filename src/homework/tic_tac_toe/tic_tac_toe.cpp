//cpp
#include<iostream>
#include<ostream>
#include<vector>
#include"tic_tac_toe.h"


using std::cout; using std::cin; using std::vector;

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


/******************* PRIVATE ***********************/

bool Tic_Tac_Toe::check_column_win()
{
    vector<string> playerXO = {"X", "O"};

    for (size_t pXO = 0; pXO < 2; pXO++)
        for (size_t i = 0; i < 3; i++)    
        {
            if (peg[i] == playerXO[pXO] && peg[i+3] == playerXO[pXO] && peg[i + 6] == playerXO[pXO])
            {
                return true;
            }
        }
    return false;
}

bool Tic_Tac_Toe::check_row_win()
{
    vector<string> playerXO = {"X", "O"};

    for (size_t pXO = 0; pXO < 2; pXO++)
        for (size_t i = 0; i < 9; i += 3)    
        {
            if (peg[i] == playerXO[pXO] && peg[i + 1] == playerXO[pXO] && peg[i + 2] == playerXO[pXO])
            {
                return true;
            }
        }
    return false;
}

	
bool Tic_Tac_Toe::check_diagonal_win()
{
 vector<string> playerXO1 = {"X", "O"};

    for (size_t pXO = 0; pXO < 2; pXO++)
        for (size_t i = 0; i < 1; i ++)    
        {
            if (peg[i] == playerXO1[pXO] && peg[i+4] == playerXO1[pXO] && peg[i + 8] == playerXO1[pXO])
            {
                return true;
            }
        }
    //return false;

vector<string> playerXO2 = {"X", "O"};

    for (size_t pXO = 0; pXO < 2; pXO++)
        for (size_t i = 2; i < 3; i += 3)    
        {
            if (peg[i] == playerXO2[pXO] && peg[i + 2] == playerXO2[pXO] && peg[i + 4] == playerXO2[pXO])
            {
                return true;
            }
        }
    return false;
}

	
void Tic_Tac_Toe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else winner = "X";
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
    if(check_column_win())
    {
        set_winner();
        return true;
    }
    else if(check_row_win())
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win())
    {
        set_winner();
        return true;
    }
    if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else 
        return false;
}