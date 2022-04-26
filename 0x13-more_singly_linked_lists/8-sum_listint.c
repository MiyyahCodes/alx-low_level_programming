#include "lists.h"

/**
 * sum_listint - this returns the sum of all the data (n)
 * @head: the head of a list.
 *
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
