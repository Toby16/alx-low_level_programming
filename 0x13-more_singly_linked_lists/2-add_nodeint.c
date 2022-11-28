#include "lists.h"

/**
 * add_nodeint - Function
 * @head: argument
 * @n: argument
 * Return: value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->n = n;
	}

	temp->next = *head;
	*head = temp;

	return (*head);
	free(temp);
}
