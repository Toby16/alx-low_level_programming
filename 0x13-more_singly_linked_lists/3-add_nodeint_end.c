#include "lists.h"

/**
 * add_nodeint_end - Function
 * @head: parameter
 * @n: parameter
 * Return: value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *temp;

	h = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	else
	{
		h->n = n;
		h->next = NULL;
	}

	temp = *head;

	if (temp == NULL)
	{
		*head = h;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = h;
	}
	return (*head);
}

