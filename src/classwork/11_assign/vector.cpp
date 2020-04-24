#include "vector.h"
#include <iostream>
/*
Initialize nums to size array.
Initialize each array element to 0.
*/
Vector::Vector(size_t sz)
	: size{ sz }, nums{new int [sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}
/*
Copy v.size to new class
create new dynamic memory array.
initialize array elements to the v.nums array values
*/
Vector::Vector(const Vector & v)
	: size{ v.size }, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}


/*
Release dynamic memory
Deallocate memory
*/
Vector::~Vector()
{
	std::cout << "\nrelease memory \n";
	delete[] nums;
}


//==============================================
//free function
void use_vector()
{
	Vector* v1 = new Vector(3);
	delete v1;
	v1 = nullptr;

}
/*
Allocate temporary dynamic arroy of size v
copy v1elements to temp array
deallocate old v2 nums array
point v2 nums array to temp array
set v2 size to v1 size
return self copy of vector
*/
Vector & Vector::operator=(const Vector &v)
{
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];

	}
	delete nums;
	nums = temp;
	size = v.size;

	return *this;
}