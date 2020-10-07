//cpp
#include "loops.h"
#include<iostream>

using namespace std;

int prototype(int num)
{
    int result = 1;

    for(int num2 = 1; num2<= num; num2++)
    {
        result *= num2;
    }

    return result;
}

