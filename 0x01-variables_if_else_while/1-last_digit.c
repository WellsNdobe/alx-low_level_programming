#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of task 2
 * Return: always 0(Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
		printf("Last digigt of %d is %d and is greater than 5\n", n, i);
	if (i == 0)
		printf("Last digit of %d is %d and is zero\n", n, i);
	if (i < 6 && i > 0)
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, i);
	return (0);
}