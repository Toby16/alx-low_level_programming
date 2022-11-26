#include "lists.h"

/**
 * list_len - Function
 * @h: parameter
 * Return: elem_num
 */

size_t list_len(const list_t *h)
{
	size_t elem_num;

	elem_num = 0;

	while (h != NULL)
	{
		h = h->next;
		elem_num += 1;
	}
	return (elem_num);
}
