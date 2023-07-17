#include <stdio.h>

/**
 * main - entry point to a program that prints combinations of numbers.
 * Return: 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 1;

	while (num1 < 9)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
		putchar(num1 + '0');
		putchar(num2 + '0');
		if(num1 == 8 && num2 == 9)
		{
			num2++;
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
		num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
