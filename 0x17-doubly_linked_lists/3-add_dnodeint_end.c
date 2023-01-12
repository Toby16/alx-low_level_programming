#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node
 *	at the end of a "dlistint_t" list.
 *
 * @head: argument of type "dlistint_t **"
 * @n: argument of type "const int"
 *
 * Return: address of the new element
 *	"NULL" if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
