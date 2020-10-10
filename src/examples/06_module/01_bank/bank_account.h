//bank_account.h
class BankAccount
{

public: //access specifier makes class function available to users of the class
    int get_balance(){return balance;} //inline class function

    void deposit(int amount);

    void withdraw(int amount);

private://access specifier - hides variables from users of the class (meaning you're in main but can't use) 
    int balance{0};

};//don't forget the semicolon!!! for classes