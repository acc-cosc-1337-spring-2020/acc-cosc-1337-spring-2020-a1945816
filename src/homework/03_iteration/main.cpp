//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string choice;
	int choice2;
	string dna;
	
	

	do
	{
		cout << "Enter 1 for GC content or 2 for DNA Complement: ";
		cin >> choice2;
		if (choice2 == 1)
		{
			double gc;
			cout << "Enter your DNA String of choice: ";
			cin >> dna;
			gc = get_gc_content(dna);
			cout << gc;
		}

		else if (choice2 == 2)
		{
			string dnac;
			cout << "Enter your DNA String of choice: ";
			cin >> dna;
			dnac = get_dna_complement(dna);
			cout << dnac;
		}

		cout << "\nWould you like to continue y/n: ";
		cin >> choice;
	} while (choice == "y" || choice == "Y");

	return 0;
}