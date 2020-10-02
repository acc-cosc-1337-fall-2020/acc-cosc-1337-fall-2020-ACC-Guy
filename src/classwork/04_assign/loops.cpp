//cpp
#include "loops.h"
#include<iostream>

using namespace std;

int prototype(int num)
{
    int numbers[num];
    const int placeHolder = num;

    //The for loop records the decremental values 
    //of the integer that was entered in by the user
    for(int i = num; i > 0; i--)
    {
        int result;
        numbers[i] = i;

        //Test used to verify that the array was
        //saving the correct values in the first loop. 
        //cout<<numbers[num]<<"\n";

        //The if statement takes the array once it is less than two
        //and begins to multiply the stored values in a nested for loop.  
        if(i < 2)
        {   

            for(int num2 = placeHolder; num2 > 0; num2--)
            {
                result *= numbers[num2];      
            }

            return result;
         }
    

    }

}

