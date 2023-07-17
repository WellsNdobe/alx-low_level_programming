#include <stdio.h>

/**
 * main - entry point to a program that prints alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	i = 0;
	c = 'a';
	while (i < 10)
	{
		putchar('%d', i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c)

	}
	putchar('\n');
	return (0);
}
