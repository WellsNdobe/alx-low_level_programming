#include "main.h"

/**
 * jack_bauer - prints every minute of jack baur 
 * Return: void
 *
 */

void jack_bauer(void)
{
	int a, b, c, d;

	while (a <= 2)
	{
	while (b <=9)
	{
	if ((a <= 1 && b <= 9)) || (a <= 2 && b <= 3))
	{
	while (c <= 5)
	{
	while (d <= 9)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(58);
	putchar(c + '0');
	putchar(d + '0');
	putchar('\n');	
	d++;
	}
	c++;
	}
	}
	b++;
	}
	a++;
	}
}
