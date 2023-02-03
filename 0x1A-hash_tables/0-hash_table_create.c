#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: argument of type 'unsigned long int'
 *	determines the size of the array
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}
	else
	{
		new_table->array = malloc(sizeof(hash_node_t) * size);

		if (new_table->array == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (i < size)
			{
				new_table->array[i] = NULL;
				i += 1;
			}
		}
		new_table->size = size;
	}
	return (new_table);
}
