#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node in the postion
 * @h: Pointer to direction of the head
 * @n: The data integer
 * @idx: Position at the insert the new node
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		idx--;
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = ptr->next;
	new_node->prev = ptr;
	ptr->next->prev = new_node;
	ptr->next = new_node;

	return (new_node);
}
