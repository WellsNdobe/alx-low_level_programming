#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b: memory size to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
