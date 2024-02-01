#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints elements of a list
 *@h: the list to be printed
 *Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] (%s)/n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		count++;
		h = h->next;
	}

	return (count);
}
