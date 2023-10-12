#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t doubly linked list
 *@head: a double pointer to the head of th list
 *@n: the element to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *ptr = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = NULL;



	return (new_node);
}
