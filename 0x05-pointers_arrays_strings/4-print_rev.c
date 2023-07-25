#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length1 = 0;
	int o;

	while (*s != '\0')
	{
		length1++;
		s++;
	}
	s--;
	for (o = length1; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
