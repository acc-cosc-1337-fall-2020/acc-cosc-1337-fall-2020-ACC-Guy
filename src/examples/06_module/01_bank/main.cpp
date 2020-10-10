#include "bank_account.h"
#include<iostream> 

using std::cout; //diff between namepace and this

int main()
{
	BankAccount account; //create variable (instance) of the class
	account.get_balance();
	
	cout<<"Balanace "<<account.get_balance();//using a class function 

	return 0;
}