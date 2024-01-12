#include "main.h"

/**
 *_isupper - checks if a char is uppercase
 *@c - the char to be checked
 *Return: returns 1 for uppercase char , else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
