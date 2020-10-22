#include "bank_account.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{	
	BankAccount Broke;
	Broke.deposit(500);
	Broke.deposit(1);
	int Get_Balance = Broke.get_balance();
	cout<<"You're balance is "<<Get_Balance;

	return 0;
}