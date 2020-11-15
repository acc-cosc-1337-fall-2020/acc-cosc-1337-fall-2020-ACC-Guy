//h

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include<vector>

using std::string; using std::vector;

class Tic_Tac_Toe
{

public: //access specifier - Makes class function available to users of the class.
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    void display_board() const;
    
    /*** Homework 6 ***/
    string get_winner() const {return winner;}
    
//friend ostream& operator << (ostream& os, const Tic_Tac_Toe& t){os<<t.get_winner;}

private: //access specifier - Hides variables from users of the class. 
    string player;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    vector<string> peg{9," "};

    /*** Homework 6 ***/
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

    string winner;


};

#endif