#include <stdlib.h>
#include "main.h"
#include <stdio.h">

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *str2;
	int size;

	size = 0;
	if (str != NULL)
	{
		while(str[i] != '\0')
		{
			size++;
		}
		str2 = malloc(sizeof(char) * (size + 1);
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
