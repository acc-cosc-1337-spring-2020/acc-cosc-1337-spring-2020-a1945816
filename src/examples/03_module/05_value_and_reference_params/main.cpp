#include<iostream>
using std::cout;


int main() 
{
	int num = 5;
	cout << "value of num is " << num << " Address is " << &num << "\n";

	int &num_ref = num;
	num_ref = 10;
	cout << "value of num is " << num << " Address is " << &num;

	return 0;
}