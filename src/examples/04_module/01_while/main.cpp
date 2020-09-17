#include <iostream>
#include "while.h"

using std::cout; using std::cin;

int main() 
{
	char choice = 'y';
	
	while(choice == 'y' || choice == 'Y')
	{
		cout<<"Enter y to continue, any other char to exit.";
		cin>>choice;
	}

	return 0;
}