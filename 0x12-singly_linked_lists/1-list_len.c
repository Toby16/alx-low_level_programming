#include "lists.h"

/**
 * list_len - Function
 * @h: parameter
 * Return: i
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
