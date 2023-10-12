#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 *	in a linked dlistint_t list
 *@h: a pointer to the head of the doubly linked list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}
