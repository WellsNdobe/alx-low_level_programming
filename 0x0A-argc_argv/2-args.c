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

	if (argc != 2)
	{
		printf("Error");
	}
	argc = 1;
	printf("%d\n", argv[argc] * argv[argc + 1]);
	
	return (0);
}
