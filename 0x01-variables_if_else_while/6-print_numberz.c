#include <stdio.h>

/**
 * main - entry point to a program that prints alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar((char)i);
		i++;
	}
	putchar('\n');
	return (0);
}
