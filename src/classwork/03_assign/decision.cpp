//cpp
#include<iostream>
#include "decision.h"

using namespace std;

string get_letter_grade_using_switch(int grade)
{
    string return_val;

    switch (grade/10)
    {
    case 10:
    return_val = "A";
    break;

    case 9:
    return_val = "A"; 
    break;

    case 8:
    return_val = "B";
    break;

    case 7:
    return_val = "C";
    break;

    case 6:
    return_val = "D";
    break;

    default:
    return_val = "F";
    break;
    }

    return return_val;

}


std::string get_letter_grade_using_if(int grade)
{   
    string return_val;

    if(grade >= 90)
    {
        return_val = 'A';
    } else if(grade >= 80)
    {
        return_val = 'B';
    } else if(grade >= 70)
    {
        return_val = 'C';
    } else if(grade >= 60)
    {
        return_val = 'D';
    } else 
    {
        return_val = 'F';
    }

    return return_val;

}
