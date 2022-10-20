#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function
 * @c: parameter
 * Return: 0 if False, 1 if True
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
