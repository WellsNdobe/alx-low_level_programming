#include <stdlib.h>
#include <stdio.h>

/**
 *main: prints program name
 *@argc: number of command line arguments
 *@argv: the command line arguments
 * Return: 0 on success or -1 if unsuccesful
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
