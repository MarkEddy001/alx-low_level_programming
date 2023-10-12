#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t a doubly linked list.
 *@head: a pointer to the head of th list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *ptr_2;

	if (head == NULL)
		return;


	while (ptr)
	{
		ptr_2 = ptr->next;
		free(ptr);
		ptr = ptr_2;
	}
}
