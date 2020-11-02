#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "savings_account.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("TEST case balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("TEST deposit func")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);
}


TEST_CASE("TEST withdrawl func")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

	account.withdrawl(50);
	REQUIRE(account.get_balance() == 50);
}



TEST_CASE("Teach checking account w no constructor")
{
	CheckingAccount account;
	REQUIRE(account.get_balance() == 0);
	
}

TEST_CASE("Teach checking account w a constructor")
{
	CheckingAccount account(900);
	REQUIRE(account.get_balance() == 0);
	
}