#include "main.h"

/**
 * _isalpha - function
 * @c: parameter
 * Return: 1 if True and 0 is False
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
