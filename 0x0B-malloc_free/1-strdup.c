#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - duplicates a string
 *@str: string to be duplicated
 *
 */
char *_strdup(char *str)
{

	char *copy;
	int i, x;

	if (str == NULL)
	{
	return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	i++;

	copy = malloc(sizeof(char)*  (i + 1));

	if (copy == NULL)
	return (NULL);

	x = 0;
	while (str[x])
	{
	copy[x] = str[x];
	x++;
	}
	copy[x] = '\0';

	return (copy);
}
