#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	auto name = "John";
	auto num = 5;
	auto num1 = 1.5;

	std::string str = "joe";
	loop_string_w_index(str);
	loop_string_w_auto(str);

	return 0;
}