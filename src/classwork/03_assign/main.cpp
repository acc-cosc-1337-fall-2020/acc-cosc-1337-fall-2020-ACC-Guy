//Write the include statement for decisions.h here
#include <iostream>
#include <string>
#include "decision.h"

//Write namespace using statements for cout and cin
using namespace std;

int main() 
{		

		int grade;		

		cout<<"Enter in an integer between zero and a hundred. \n";
		cin>>grade;

		//Validation check
		if(grade >100 || grade < 0)
		{
			cout<<"Number of out range.\n";
			cout<<"We don't joke about grades like that here.\n";
			cout<<"Reinitialize the program and enter a valid value.";

			return 0; 
		}
		else if (cin.fail())
		{
			cout<<"This isn't even a number?!\n";
			cout<<"Reinitialize the program and enter a valid value.";
			
			return 0; 
		}

	string return_val_grade_switch = get_letter_grade_using_switch(grade);

	string return_val_grade_if = get_letter_grade_using_if(grade);

	cout<<"The student's grade is " <<  return_val_grade_switch <<" via the Switch Case grading method.\n";

	cout<<"The student's grade is " << return_val_grade_if <<" via the If Else grading method.\n";

	return 0;

}

