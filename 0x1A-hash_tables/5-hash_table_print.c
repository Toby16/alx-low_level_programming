#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: argument of type 'const hash_table_t'
 *	hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int sep_flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (sep_flag == 0)
				sep_flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
