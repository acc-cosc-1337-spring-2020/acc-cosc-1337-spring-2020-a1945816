#include "vectors.h"
#include <vector>
#include <iostream>
using std::vector;	using std::cout;	using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> nums = { 8, 4, 20, 88, 66, 99 };
	int choice = 3;
	int pchoice = 3;
	do 
	{
		cout << "Enter 1 for get max from vector or 2 for Get primes: ";
		cin >> pchoice;
		if (pchoice == 1)
		{
			int max = get_max_from_vector(nums);
			cout << max;
		}
		if (pchoice == 2)
		{
			vector<int> prime;
			int num;
			cout << "\nEnter a number to see the prime numbers up to your number: ";
			cin >> num;
			prime = vector_of_primes(num);
			for (int i = 0; i < num; i++)
			{
				cout << prime[i] << "\n";
			}
		}
		cout << "\nwould you like to continue (1 for yes, 0 for no): ";
		cin >> choice;
	} while (choice != 0);
	return 0;
}