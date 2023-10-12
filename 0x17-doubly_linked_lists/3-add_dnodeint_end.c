#include "lists.h"
/**
 * add_dnodeint_end - Add a node at the end of list
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The direction of the tail node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
