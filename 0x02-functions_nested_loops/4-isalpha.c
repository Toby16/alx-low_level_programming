#include "main.h"

/**
 * _isalpha - function
 * @c: parameter
 * Return: 1 if True and 0 is False
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
