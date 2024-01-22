#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 *ABS:calculates absolute value
 *@x: value to calculate absolute for
 *Return: returns x
 */

int ABS(int x)
{
	if (x < 0)
	{
	return (-x);
	}
	else
	{
	return (x);
	}
	return (0);
}
#endif
