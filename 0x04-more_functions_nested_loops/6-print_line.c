#include "main.h"

/**
 * print_line - draws a straight line
 * @n: contains the number of times the character _ should be printed
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
		_putchar('_');
		i++;
		}
	}
	_putchar('\n');
	}
}
