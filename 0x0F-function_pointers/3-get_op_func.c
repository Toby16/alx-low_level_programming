#include "3-calc.h"

/**
 * get_op_func - Function
 * @s: parameter
 * Return: value
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t opp[] = {
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
		if (s[0] == opp->op[i])
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (opp[i / 2].f);
}
