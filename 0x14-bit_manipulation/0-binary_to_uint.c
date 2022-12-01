#include "main.h"

/**
 * binary_to_uint - Function
 * @b: parameter
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int x, binary;

	i = 0;
	x = 0;

	if (!b)
	{
		return (0);
	}

	while (b[x] != '\0')
	{
		x += 1;
	}

	for (x--, binary = 1; x >= 0; x--, binary *= 2)
	{
		if ((b[x] != '0') && (b[x] != '1'))
		{
			return (0);
		}
		else if (b[x] & 1)
		{
			i += binary;
		}
	}
	return (i);
}
