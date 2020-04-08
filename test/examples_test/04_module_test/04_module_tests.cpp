#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <memory>

using std::make_unique; using std::unique_ptr;
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify bank account constructor")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500); //Creates an instance of Savings
	REQUIRE(account->get_balance() == 500);
}

TEST_CASE("verify bank account deposit")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500); //Creates an instance of Savings
	REQUIRE(account->get_balance() == 500);

	account->deposit(50);
	REQUIRE(account->get_balance() == 550);

	REQUIRE_THROWS_AS(account->deposit(-50), Invalid);
	REQUIRE(account->get_balance() == 550);
}

TEST_CASE("Verify bank account withdraw")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500); //Creates an instance of Savings
	REQUIRE(account->get_balance() == 500);

	account->withdraw(50);
	REQUIRE(account->get_balance() == 450);

	REQUIRE_THROWS_AS(account->withdraw(-1), Invalid);
	REQUIRE(account->get_balance() == 450);

	REQUIRE_THROWS_AS(account->withdraw(451), Invalid);
	REQUIRE(account->get_balance() == 450);


}

TEST_CASE("Test BankAccount default constructor balance 0")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(); //Creates an instance of Savings
	REQUIRE(account->get_balance() == 0);
}
/*
TEST_CASE("Test BankAccount initial open deposit >= 25")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	account.open(25);
	REQUIRE(account.get_balance() == 25);
}

TEST_CASE("BankAccount initial open deposit < 25")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);


	REQUIRE_THROWS_AS(account.open(24), Invalid);
}

TEST_CASE("Test BankAccount static rate initialization")
{
	BankAccount account;
	REQUIRE(account.get_rate() == .025);
}

TEST_CASE("Verify checking account constructor")
{
	CheckingAccount account(500);
	REQUIRE(account.get_balance() == 512);
}

TEST_CASE("Verify checking account get_balance")
{
	CheckingAccount account(150);
	REQUIRE(account.get_balance() == 153);
}
*/