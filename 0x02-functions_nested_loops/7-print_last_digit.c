#include "main.h"

/**
 * print_last_digit - computes last digit of a number
 * @n - the number checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
	lastDigit = lastDigit * -1;
	}
	putchar(lastDigit * '0');
	return (lastDigit);
}
