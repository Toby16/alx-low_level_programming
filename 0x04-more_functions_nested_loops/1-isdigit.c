#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function
 * @c: parameter
 * Return: 0 if False, 1 if True
 */

int _isdigit(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
