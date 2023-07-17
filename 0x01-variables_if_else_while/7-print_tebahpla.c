#include <stdio.h>

/**
 * main - entry point to a program that prints alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	return (0);
}
