#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints number of command line arguments
 *@argc: number to be printed
 *@argv: argument unused in the program
 *Return: returns 0 if succesful, or -1 when failed
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
