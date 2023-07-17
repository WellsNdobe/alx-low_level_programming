#include <stdio.h>

/**
 * main - This program prints letters from a - z except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	return (0);
}
