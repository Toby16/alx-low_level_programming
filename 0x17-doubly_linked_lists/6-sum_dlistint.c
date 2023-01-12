#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 *	of a "dlistint_t" linked list.
 * @head: argument of type "dlistint_t"
 * Return: sum of all data of a "dlistint_t"
 *	linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int val_;

	temp = head;
	val_ = 0;

	while (temp != NULL)
	{
		val_ += temp->n;
		temp = temp->next;
	}
	return (val_);
}
