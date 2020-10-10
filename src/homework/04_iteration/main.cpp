//write include statements
#include<iostream>
#include<string>
#include"dna.h"
//write using statements

using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string user_input;
	int choice;
	char YesChoice = 'n';

	cout<<"Sup bruh... \nEnter 1 to get the GC Content \nOrrrrrr Enter 2 to get DNA Complement.";
	cin>>choice;

	cout<<"Enter your baby daddy's DNA string. \n";
	cin>>user_input;


	while(YesChoice != 'y' || YesChoice != 'Y')
	{
	
	if(choice == 1)
	{
 	double count = get_gc_content(user_input);
	cout<<count<<"\n";
	}
	else if(choice == 2)
	{
	string replace_characters = get_dna_complement(user_input);
	cout<<replace_characters<<"\n";
	}
	else
	break;
	}

	return 0;
}