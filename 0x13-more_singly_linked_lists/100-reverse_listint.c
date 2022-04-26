#include "lists.h"

/**
 * reverse_listint - this reverses a linked list.
 * @head: the head of a list.
 *
 * Return: the pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
