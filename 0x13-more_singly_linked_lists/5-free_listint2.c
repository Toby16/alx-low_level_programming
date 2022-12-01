#include "lists.h"

/**
 * free_listint2 - Function
 * @head: parameter
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head != NULL)
	{
		ptr = *head;

		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
