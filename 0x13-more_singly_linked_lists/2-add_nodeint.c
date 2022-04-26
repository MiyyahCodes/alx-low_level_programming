#include "lists.h"

/**
 * add_nodeint - this add a new node in the beginning
 * @head: the head of a list.
 * @n: n element.
 *
 * Return: the address of the new element or null if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
