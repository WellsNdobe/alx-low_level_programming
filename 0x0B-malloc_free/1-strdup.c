#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char to be replicated;
 * Return: pointer to new string and Null if not available
 */
char *_strdup(char *str)
{
	char *str2;
	int size;
	int i;

	size = 0;
	if (str != NULL)
	{
		while(str[i] != '\0')
		{
			size++;
		}
		str2 = malloc(sizeof(char) * (size + 1));
		for (i = 0; i < size; i++)
		{
			str2[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (str2);
}
