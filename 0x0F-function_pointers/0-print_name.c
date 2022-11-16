#include "function_pointers.h"

/**
 * print_name - Function
 * @name: parameter
 * @f: parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
