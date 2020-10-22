//bank_account.h
#include<iostream>

 class BankAccount
      { 
      public: 
      //access specifier-makes class function available to users of the class 
     BankAccount() =  default; 
      //user defined default constructor 
    
      explicit BankAccount(int b); 
      //user created constructor 
           
      int get_balance() const 
       { 
      return balance;
      } 
      //inline class function-const read only for class variables 
     
      void deposit(int amount);

      void withdraw(int amount); 

      static int get_bank_balance()
      { 
      return bank_balance;
      } 

      friend void friend_display_balance(const BankAccount& account);

      //THIS IS A FREE FUNCTION! NOT PART OF THE CLASS 
      //friend void BranchBank::update_balance(int b);

    //   friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);

    //   friend std::istream& operator>>(std::istream& in, BankAccount& a); 

    //   friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2); 
 
      private: 
      //access specifier-hides variables from users of the class 
           
      int balance{0}; 
           
      static int bank_balance; 

      };