#include <stdio.h>

/**
 * main - entry point to a program that prints combinations of numbers.
 * Return: 0 (Success)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;

	while (num1 < 9)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 == 7 && num2 == 8 && num3 == 9)
			{
			num3++;
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			num3++;
			}
		num2++;
		}
	num1++;
	}
	putchar('\n');
	return (0);
}
