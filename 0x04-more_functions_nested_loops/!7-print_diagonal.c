#include "main.h"

/**
 * print_line - draws a straight line
 * @n: contains the number of times the character \ should be printed
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
	while (n > 0) 
	{
		while (i != n)
		{
		_putchar('\\');
		i++;
		}
	}
	_putchar('\n');
	}
}
