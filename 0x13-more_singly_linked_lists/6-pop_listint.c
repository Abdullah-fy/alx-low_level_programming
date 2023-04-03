#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns its data (n).
 * @head: pointer to a pointer to the head node of the list.
 *
 * Return: the data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
