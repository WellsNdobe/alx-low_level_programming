#include "main.h"

/**
 * _abs = processes absolute value of an int
 * @c - computed value
 * Return: abs_num for negative number or c for positive num
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_num = c * -1;
	return (abs_num);
	}
	return (c);
}
