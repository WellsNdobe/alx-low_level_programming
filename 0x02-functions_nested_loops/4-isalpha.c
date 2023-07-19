#include "main.h"

/**
 * _islower - checks for lower case chars
 * @c - the checked char
 * Return: 0 for lowercase and 1 for uppercase
 */

int _isalpha(int c)
{
	if((c >= 65 && c <= 97)||(c >= 97 && c <= 122))
	{
		return (1);
	}
	return 0;
}
