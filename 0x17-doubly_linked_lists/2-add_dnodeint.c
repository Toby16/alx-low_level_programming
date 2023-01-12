#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node
 *	at the beginning of a "dlistint_t" list
 *
 * @head: argument of type "dlistint_t **".
 *		accepts the "head" pointer of type "dlistint_t *"
 *
 * @n: argument of type "const int".
 *
 * Return: address of the new element
 *	or "NULL" if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

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
		if (*head == NULL)
		{
			temp = *head = newnode;
			return (*head);
		}
		else
		{
			temp = *head;
			newnode->next = temp;
			temp->prev = newnode;
			temp = newnode;
			*head = temp;
		}
	}
	return (newnode);
}
