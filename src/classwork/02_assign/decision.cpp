#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hourly_rate, double hours)
{
	
	
	if (hours > 40)
	{
		double result;
		result = hourly_rate * 40 + ((hours - 40)*(hourly_rate * 1.5));
		return result;

	}
	else
		return hours * hourly_rate;

	
}
