#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and initializes an array
 *@size: array size.
 *@c: Character assigned for an element.
 *Return: Pointer to allocated array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int num;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	for (num = 0; num < size; num++)
	str[num] = c;

	return (str);
}
