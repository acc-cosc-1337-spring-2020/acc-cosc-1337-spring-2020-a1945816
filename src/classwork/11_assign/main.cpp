#include "vector.h"
#include<iostream>
#include <vector>
int main() 
{
	std::vector<int> v;
	v.capacity();
	v.reserve(6);
	v.resize(6);
	v.push_back(3);


	Vector v1(3);
	Vector v1 = get_vector();

	return 0;
}

