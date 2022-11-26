#include "lists.h"

/**
 * add_node - Function
 * @head: parameter
 * @str: parameter
 * Return: *head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
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
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
