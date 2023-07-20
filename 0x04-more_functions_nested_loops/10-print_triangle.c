#include "main.h"

/**
 * print_line - draws a triangle.
 * @n: contains the number of times the character # should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		
	while (n > 0) 
	{
		_putchar('#');
		n--;
	}
	_putchar('\n');
	}
}
