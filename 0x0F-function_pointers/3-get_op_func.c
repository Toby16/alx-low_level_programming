#include "3-calc.h"

/**
 * get_op_func - Function
 * @s: parameter
 * Return: value
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
		{
			break;
		}
		i++;
	}
	return (ops[i / 2].f);
}
