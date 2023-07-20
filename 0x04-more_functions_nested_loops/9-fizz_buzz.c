#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * replaces multiples of three with Fizz.
 * replaces multiples of five with Buzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
