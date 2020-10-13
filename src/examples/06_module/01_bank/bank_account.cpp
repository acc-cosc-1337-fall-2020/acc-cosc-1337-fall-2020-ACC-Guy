//bank_account.cpp
#include"bank_account.h"

void BankAccount::deposit(int amount)
{   
    if(amount>0)
    {
    balance += amount;
    }
}

 void BankAccount::withdraw(int amount)
 {
     if(amount > 0 && balance >= amount)
     {
         balance -= amount;
     }

 }

 void display_bank_account(BankAccount account)
 {
    
 }

//FREE FUNCTIONS-NOT CLASS FUNCTIONS
BankAccount get_bank_account()
{
    BankAccount(500);
    return Account;
}