#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 * Return void
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		int c;

		c = 0;
		while (c <= '14')
		{
		_putchar(c + '0');
		c++;
		}
		_putchar('\n');
	a++;
	}
	_putchar('\n');
}
