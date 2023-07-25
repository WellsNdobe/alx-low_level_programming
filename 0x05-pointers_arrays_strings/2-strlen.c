#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string variable
 * Return: length
 */
int _strlen(char *s)
{
	int len1 = 0;

	while (*s != '\0')
	{
		len1++;
		s++;
	}
	return (len1);
}
