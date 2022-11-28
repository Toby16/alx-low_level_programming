#include "lists.h"

/**
 * print_list - Function
 * @h: parameter
 * Return: i
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
	}
	return (i);
}

