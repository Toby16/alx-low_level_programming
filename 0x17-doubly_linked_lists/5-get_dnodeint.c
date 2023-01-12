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
	unsigned int i, num_of_nodes;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = head;
		num_of_nodes = dlistint_len(head);

		if (index >= num_of_nodes)
		{
			return (NULL);
		}
		else
		{

			for (i = 0; temp != NULL; i++)
			{
				temp = temp->next;
				if (i == index)
				{
					return (temp);
				}
			}
		}
	}
	return (temp);
}
