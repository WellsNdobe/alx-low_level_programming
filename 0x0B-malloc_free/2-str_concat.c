#include "main.h"
#include <stdlib.h>

/**
 * concatenate_strings - Concatenates two input strings.
 * @s1: First strin.
 * @s2: Second string.
 * Return: Concatenated string.
 */
char *concatenate_strings(char *s1, char *s2)
{
	char *concatStr;
	int i, x;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	i=0;
	x = 0;

	// Determine the length of the first string
	while (s1[i] != '\0')
	{
	i++;
	}
	// Determine the length of the second string
	while (s2[x] != '\0')
	{
	x++;
	}

	// Allocating memory for the concatenated string
	concatStr = malloc(sizeof(char) * (i + x + 1));

	// Confirm memory allocation
	if (concatStr == NULL)
	{
	return (NULL);
	}
	
	i = 0;
	x = 0;

	// Copy first string to concatStr
	while (s1[i] != '\0')
	{
	concatStr[i] = s1[i];
	i++;
	}

	// Copy second string to concatStr
	while (s2[x] != '\0')
	{
	concatStr[i] = s2[x];
	i++;
	x++;
	}
	concatStr[i] = '\0';

	return (concatStr);
}
