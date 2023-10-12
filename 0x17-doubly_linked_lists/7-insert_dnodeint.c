#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 *	at a given position.
 *@h: a double pointer to the head of th list
 *@idx: the index element to be added
 *@n: the element
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *ptr = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0 || *h == NULL)
	{
		return (add_dnodeint(h, n));
	}

	i = 1;
	while (i < idx)
	{
		if (!ptr->next)
			break;
		ptr = ptr->next;
		i++;
	}
	if (i == idx && ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	ptr->next->prev = new_node;
	new_node->next = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
