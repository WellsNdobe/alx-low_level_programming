#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints program name
 *Return: 0 on success or -1 if unsuccesfu
 *argc - number of command line arguments
 *argv - command line arguments as strings
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
