#include <stdio.h>
/**
 * main - program that shows sizes of various types on its computer
 * Return: 0(Succes)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int d;
	float f;


printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float:  %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

