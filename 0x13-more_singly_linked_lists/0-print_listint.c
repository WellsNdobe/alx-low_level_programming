#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the first elemeny
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}

	return (count);
}
