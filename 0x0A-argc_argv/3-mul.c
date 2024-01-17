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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
