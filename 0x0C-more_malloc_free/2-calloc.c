#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
*_calloc - creates an array
*@nmemb: number of elements in the array
*@size: size of each element
*Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int tot_size;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	tot_size = nmemb * size;

	ptr = malloc(tot_size);

	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
