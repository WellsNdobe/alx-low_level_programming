#include <stdio.h>

/**
 * main - entry point to a program that prints alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	char c;

	c = 'a';
	a = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
