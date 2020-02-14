//write includes statements
#include <iostream>
#include "loops.h"
//write using statements for cin and cout
using std::cout;	using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int cont;
	do 
	{
		int num;
		
		cout << "Enter a number: ";
		cin >> num;
		factorial(num);
		
		cout << "The factorial is: " << factorial(num) << "\n";

		cout << "Press 1 to continue: ";
		cin >> cont;
	} while (cont == 1);
	return 0;
}