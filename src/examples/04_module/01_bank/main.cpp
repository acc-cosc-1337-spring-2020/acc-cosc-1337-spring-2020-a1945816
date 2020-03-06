#include "bank_account.h"
#include <iostream>

using std::cout; using std::cin;
int main()
{
	
	BankAccount account(500);
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
	}
	return 0;
}