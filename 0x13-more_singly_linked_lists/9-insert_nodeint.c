#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position
 *
 * @head: pointer to pointer to head
 * @idx: index of the list where the new node should be added
 * @n: value of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		free(new);
		return (NULL);
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
