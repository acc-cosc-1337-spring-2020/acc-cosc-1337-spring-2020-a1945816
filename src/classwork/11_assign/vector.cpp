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
Make sure new allocation is greater than space
Create temp dynamic array of size new allocation
copy values from old memory array to temporary array

*/
void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}

	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}
	delete[] nums;
	space = new_allocation;
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
Vector get_vector()
{
	Vector v(3);
	return v;
}

/*
Get the dynamic memory from v
Get the size from v
point thev.nums to nullptr
*/
Vector::Vector(Vector && v)
	: size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;
}

/*
Deallocate origional dynamic memory 
Get the dynamic memory for v
Get the size from v
point v.nums to nullptr
set v.size to 0
*/
Vector & Vector::operator=(Vector && v)
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;
	return *this;
	
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
