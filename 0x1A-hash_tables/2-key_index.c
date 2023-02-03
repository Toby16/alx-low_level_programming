#include "hash_tables.h"

/**
 * key_index - function to give index of a key
 * @key: argument of type 'const unsigned char *'
 *	the key
 * @size: argument of type 'unsigned long int size'
 *	the size of the array
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2(key);
	return (x % size);
}
