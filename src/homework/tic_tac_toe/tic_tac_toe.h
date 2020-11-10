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
    

private: //access specifier - Hides variables from users of the class. 
    string player;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    vector<string> peg{9," "};
};

// tic_tac_toe::tic_tac_toe(/* args */)
// {
// }

// tic_tac_toe::~tic_tac_toe()
// {
// }

#endif