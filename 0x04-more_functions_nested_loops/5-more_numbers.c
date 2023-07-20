#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Return void
 */
void print_numbers(void)
{
	char c;
	int a;

	c = 0;
	a = 0;
	while (a <= 9)
	{
		while (c <= '14')
		{
		_putchar(c);
		c++;
		}
		_putchar('\n');
	a++;
	}
	_putchar('\n');
}
