#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 *@head: a pointer to the head of th list
 *
 * Return: the sum of all the data (n), if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int _sum = 0;

	if (head == NULL)
		return (_sum);

	while (ptr)
	{
		_sum += ptr->n;
		ptr = ptr->next;
	}

	return (_sum);
}
