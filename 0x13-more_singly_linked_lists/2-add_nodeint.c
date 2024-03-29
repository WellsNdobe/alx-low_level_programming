#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the start of a linked list
 * @head: Pointer to the pointer to the first element in a list
 * @n: Value to be added on the new node
 * Return: Address of new element or Null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
	return NULL;


	new_node->n = n;
	new_node->next = *head;


	*head = new_node;

	return new_node;
}
