#include "main.h"

/**
 *_isupper - checks if a character is uppercase.
 *@c: contains the char to be checked
 * Return: 1 if c is uppercase and Return 0 if c is not uppercase character.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
