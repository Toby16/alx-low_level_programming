#include "main.h"

/**
 * string_toupper - Function
 * @ch: Parameter
 * Return: ch
 */

char *string_toupper(char *ch)
{
	int i;

	i = 0;

	while (ch[i])
	{
		if (('a' <= ch[i]) && ('z' >= ch[i]))
		{
			ch[i] -= 32;
		}
		i++;
	}
	return (ch);
}
