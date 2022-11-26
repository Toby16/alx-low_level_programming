#include "lists.h"

/**
 * free_list - Function
 * @head: parameter
 * Return: value
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
