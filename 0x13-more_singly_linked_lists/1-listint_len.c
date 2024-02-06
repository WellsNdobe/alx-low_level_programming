#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * listint_len - Calculates the number of elements 
 * @h: Pointer to the first element
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}

	return (count);
}
