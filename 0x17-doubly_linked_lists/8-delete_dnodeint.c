#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 *	index of a doubly linked list.
 *@head: a pointer to the head of th list
 *@index: the position of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	while (i != index && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index && ptr->next == NULL)
	{
		ptr->prev->next = NULL;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	if (i == index)
	{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	return (-1);
}
