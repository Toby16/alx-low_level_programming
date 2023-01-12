#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 *	in a linked "dlistint" list
 * @h: argument of type "const dlistint_t *"
 * Return: number oof elements in linked "dlistint" list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		i += 1;
		temp = temp->next;
	}
	return (i);
}
