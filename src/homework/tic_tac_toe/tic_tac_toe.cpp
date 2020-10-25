//cpp
#include<iostream>

using std::cout;

char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void display_board(char board[])
{
    cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\n";
    cout<<"----------\n";
    cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\n";
    cout<<"----------\n";
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\n";
}