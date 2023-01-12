#include "lists.h"

/**
 * print_dlistint - Function that prints all elements of a "dlistint_t" list
 * @h: argument of type "const dlistint *"
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		i += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
