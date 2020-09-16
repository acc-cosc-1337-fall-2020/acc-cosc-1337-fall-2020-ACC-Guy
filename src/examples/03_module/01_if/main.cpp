#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

//yes

int main() 
{
	//create a bool variable named even
	//create an int variable named value
	bool even;
	int value;

	//prompt user for a keyboard number
	//assign the number to the value variable

	cout<<"enter a number.\n";
	cin>>value;

	even = is_even(value);

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	if(even)
	{
		cout<<"number is even";
	}	
	else
	{
		cout<<"number "<< value <<" is odd.";
	}
	
	//display even if number is even

	cout<<"Enter hours: ";
	cin>>value;

	bool over_time_hours = overtime(value);

	if(over_time_hours)
	{
		cout<<"\n" <<value<<" hours  pay overtime.";
	}

	return 0;
}
