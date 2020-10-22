//bank_account.cpp
#include"bank_account.h"

void BankAccount::deposit(int amount)
{
    if(amount>0)
    {
    balance += amount;
    }
}

//  void BankAccount::withdraw(int amount)
//  {
//      if(amount > 0 && balance >= amount)
//      {
//          balance -= amount;
//          bank_balance -= amount;
//      }

//  }



// BankAccount get_bank_account()
// {
//     BankAccount(500);
//     return Account;
// }

// std::ostream& operator<<(std::ostream& out, const BankAccount& a)
// {
//     cout<<"Operator overload balance: "<<a.balance<<"\n";

//     return out;
// }