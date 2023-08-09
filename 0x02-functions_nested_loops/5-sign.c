#include "main.h"

/**
 * print_sign - prints sign of an integer
 * @n - holds the value of a passed int
 * Return 0 if n is equal to 0 or 1 if n is positive or -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
