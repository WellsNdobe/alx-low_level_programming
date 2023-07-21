#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Return void
 */
void print_numbers(void)
{
	char c;

	c = 0;
	while (c <= '9')
	{
	       if(c != '2' && c != '4')
		{
		_putchar(c);
		c++;
		}
	}
	_putchar('\n');
}
