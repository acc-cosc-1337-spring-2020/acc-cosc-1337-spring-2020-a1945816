#include "ref_pointers.h"
#include <iostream>


//

void ref_pointers(int & int1, int * int2)
{
	int1 = 100;
	*int2 = 66;
}