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


printf("size of char = %lu bytes/n", (unsigned long)sizeof(c));
printf("size of int = %lu bytes/n", (unsigned long)sizeof(i));
printf("size of long int = %lu bytes/n", (unsigned long)sizeof(a));
printf("size of long long int = %lu bytes/n", (unsigned long)sizeof(d));
printf("size of float  = %lu bytes/n", (unsigned long)sizeof(f));
return (0);
}

