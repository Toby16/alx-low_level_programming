#include "lists.h"

/**
 * free_dlistint - Function that frees a "dlistint_t" list
 * @head: argument of type "dlistint_t *"
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;

	}

	head = NULL;
}
