#include <stdio.h>

/**
 * main - This program prints letters from a - z except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
