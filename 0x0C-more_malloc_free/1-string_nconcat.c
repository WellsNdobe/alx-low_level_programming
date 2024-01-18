#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: first string to be concatenated
 *@s2: second string to be concatenated
 *@n: number of characters from string 2
 *Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *ptr = malloc(b);
	char *newStr;
	int length;

	length = 0;


	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	while (length != n)
	{
	newStr[length] = s2[length];
	}

	ptr = malloc(sizeof((s1) + sizeof((newStr))));

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
