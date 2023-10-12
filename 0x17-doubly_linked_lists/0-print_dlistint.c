#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 *	of a dlistint_t (doubly linked list)
 *@h: the head to the doublu linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		length++;

		ptr = ptr->next;
	}

	return (length);
}
