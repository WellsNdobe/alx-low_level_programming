#include <stdio.h>

/**
 *main - prints number of command line arguments
 *@argc: number to be printed
 *@argv: argument unused in the program
 *Return: returns 0 if succesful, or -1 when failed
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
