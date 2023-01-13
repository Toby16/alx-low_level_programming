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
	dlistint_t *newnode, *temp_1, *temp_2;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	temp_1 = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while ((idx > 1) && (temp_1 != NULL))
	{
		temp_1 = temp_1->next;
		idx -= 1;
	}

	if (!(temp_1) && idx != 0)
	{
		return (NULL);
	}

	if (temp_1->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	temp_2 = temp_1->next;
	temp_2->prev = newnode;
	temp_1->next = newnode;
	newnode->prev = temp_1;
	newnode->next = temp_2;

	return (newnode);
}
