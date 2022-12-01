#include "lists.h"

/**
 * get_nodeint_at_index - Function
 * @head: argument
 * @index: argument
 * Return: value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
