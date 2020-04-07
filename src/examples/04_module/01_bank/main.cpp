#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include<memory>
#include "customer.h"
using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;
int main()
{
	
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90); //Creates an instance of Savings
	unique_ptr<BankAccount> c = make_unique<CheckingAccount> (100);//Creates an instance of checking
	
	vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";
	}

	
	
	
	
	/*
	play again loop start
	Ttt game; (make sure this is inside loop so the same game isnt saved over and over)

	loop for mark board


	game ends

	call manager save game

	loop if user wants to play again
	
	*/

	/*
	cin >> account;
	cout << account;
	display_balance(account);


	auto balance = account.get_balance();
	cout << "Balance is: " << balance << "\n";

	auto amount{ 0 };
	cout << "Enter the deposit amount:  ";
	cin >> amount;
	try
	{
		account.deposit(amount);
		cout << "Balance is: " << balance;
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	} */
	return 0;
}