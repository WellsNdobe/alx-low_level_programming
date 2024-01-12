#include "main.h"

/*
 *
 *@s: Pointer of the memory area
 *@b: Contains the value to be set
 *@n: Number of bytes to be set to b
 *Return: pointer to the area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; n > 0; n--)
	{
	s[num] = b;
	}
	return s;
}
