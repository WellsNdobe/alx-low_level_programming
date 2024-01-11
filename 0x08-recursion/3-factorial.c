#include "main.h"

/*
 *factorial - returns factorial of n
 *@n the number of which the factorial is returned
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
