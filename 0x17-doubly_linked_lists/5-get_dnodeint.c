#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node
 *	of a dlistint_t linked list
 * @head: argument of type "dlistint_t *"
 * @index: argument of type "unsigned int"
 * Return: the nth node of a dlistint_t linked list
 *	else, "NULL" if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
			i += 1;
		}
	}
	return (NULL);
}
