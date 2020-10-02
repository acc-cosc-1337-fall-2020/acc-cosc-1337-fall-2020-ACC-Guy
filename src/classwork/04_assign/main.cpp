//write includes statements
#include<iostream>
#include"loops.h"

//write using statements for cin and cout

using namespace std;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	
	int input;

	cout<<"Please enter a number.\n";
	
	cin>>input;
	cout<<"\n";

	int result = prototype(input);

	cout<<"The answer is "<<result<<", are you happy now?";

	return 0;
}