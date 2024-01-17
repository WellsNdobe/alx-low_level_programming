#include <stdio.h>

/**
 *main - prints number of command line arguments
 *@argc: number to be printed
 *@argv: argument unused in the program
 *Return: returns 0 if succesful, or -1 when failed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
