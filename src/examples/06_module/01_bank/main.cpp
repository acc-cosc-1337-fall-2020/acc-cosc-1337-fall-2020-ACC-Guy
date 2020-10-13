#include "bank_account.h"
#include<iostream> 

using std::cout; //diff between namepace and this

int main()
{
	BankAccount account(100); //create variable (instance) of the class
	cout<<"Balanace "<<account.get_balance()<<"\n\n";//using a class function 

	BankAccount new_account;
	new_account.deposit(25);
	cout<<"New account balance: "<<new_account.get_balance();//using a public class function

	display_bank_account(new_account);

	new

	return 0;
}