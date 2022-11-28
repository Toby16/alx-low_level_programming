#include "lists.h"

/**
 * listint_len - Function
 * @h: parameter
 * Return: value
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
