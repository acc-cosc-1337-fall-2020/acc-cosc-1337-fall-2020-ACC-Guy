//bank_account.h
class BankAccount
{

public: //access specifier makes class function available to users of the class
    
    /* CONSTRUCTOR OVERLOADING */
    BankAccount() : balance(0){}; //default constructor --synthesized
    //if you create a constructor with at least one parameter, the default constructor does not 
    //get created.
    BankAccount(int b) : balance(b){}//user created constructor

    /*DELEGATING CONSTRUCTOR*/
    //use the constructor to call another constructor
    //This prevents you from adding the same logic check to several constructors. 
    //since you only do this once. 
    //For example
    //BankAccount() : BankAccount(0){}


    int get_balance(){return balance;} //inline class function

    void deposit(int amount);

    void withdraw(int amount);

  
private://access specifier - hides variables from users of the class (meaning you're in main but can't use) 
    int balance{0};

};//don't forget the semicolon!!! for classes

  void display_bank_account(BankAccount account);

  BankAccount get_bank_account;
