#include "lists.h"

/**
 * print_listint - Function
 * @h: parameter
 * Return: value
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
