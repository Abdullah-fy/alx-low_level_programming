#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to head
 * @index: index of node
 *
 * Return: ptr to nth node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *new;

	new = head;

	for (i = 0; i < index && new != NULL; i++)
	new = new->next;

	return (new);
}
