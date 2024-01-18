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
	unsigned int s1_len = 0, s2_len = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[s1_len] != '\0')
	s1_len++;

	while (s2[s2_len] != '\0')
	s2_len++;

	if (n >= s2_len)
	n = s2_len;

	ptr = (char *)malloc(s1_len + n + 1);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	ptr[i] = s1[i];

	for (i = 0; i < n; i++)
	ptr[s1_len + i] = s2[i];

	ptr[s1_len + n] = '\0';
	return (ptr);
}
