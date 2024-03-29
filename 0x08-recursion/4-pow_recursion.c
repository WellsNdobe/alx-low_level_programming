#include "main.h"

/**
 *_pow_recursion - returns value of x to the power of y
 *@x integer to be multiplied
 *@y the power of x
 *return: value of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
	 return (x *= _pow_recursion(x, y-1));
	}
	if (y == 0)
	{
	return (1);
	}

	return (0);
}
