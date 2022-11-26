#include "lists.h"

/**
 * add_node_end - Function
 * @head: parameter
 * @str: parameter
 * Return: *head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *ptr_2;
	size_t i, j;

	j = 0;
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->str = strdup(str);

		for (i = 0; str[i]; i++)
		{
			j += 1;
		}
	}

	ptr->len = j;
	ptr->next = NULL;

	ptr_2 = *head;

	if (ptr_2 == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (ptr_2->next != NULL)
		{
			ptr_2 = ptr_2->next;
		}
		ptr_2->next = ptr;
	}
	return (*head);
}
