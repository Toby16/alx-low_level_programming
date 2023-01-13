#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node
 *	at a given position.
 * @h: argument of type "dlistint_t **"
 * @idx: argument of type "unsigned int"
 * @n: argument of type "int"
 *
 * Return: the address of the new node
 *	or "NULL" if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;

		if (idx == 0)
		{
			newnode->next = *h;
			(*h)->next = newnode;
			*h = newnode;
		}
		else
		{
			temp = *h;

			for (i = 0; i < (idx - 1) && temp->next != NULL; i++)
			{
				temp = temp->next;
			}

			if (temp->next != NULL)
			{
				newnode->next = temp->next;
				temp->next->prev = newnode;
			}
			temp->next = newnode;
			newnode->prev = temp;
		}
		return (*h);
	}
}
