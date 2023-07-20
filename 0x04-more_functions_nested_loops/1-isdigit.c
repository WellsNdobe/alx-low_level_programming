#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: contains the value to be checked
 * Return 1 if c is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
