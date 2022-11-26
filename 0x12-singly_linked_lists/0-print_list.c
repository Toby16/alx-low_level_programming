#include "lists.h"

/**
 * print_list - Function
 * @h: parameter
 * Return: node
 */

size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}

		h = h->next;
		node += 1;
	}
	return (node);
}

