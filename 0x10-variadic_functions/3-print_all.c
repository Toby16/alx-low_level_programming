#include "variadic_functions.h"

void _int(va_list val);
void _char(va_list val);
void _float(va_list val);
void _string(va_list val);
void print_all(const char * const format, ...);

/**
 * print_all - Function
 * @format: parameter
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int x, y;
	char *separator;

	x = 0;
	separator = "";

	printer_t funcs[] = {
		{"i", _int},
		{"c", _char},
		{"f", _float},
		{"s", _string},
	};

	va_start(list, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symb)))
		{
			y += 1;
		}

		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(list);
			separator = ", ";
		}

		x += 1;
	}
	printf("\n");
	va_end(list);
}

/**
 * _int - Function
 * @val: parameter
 */

void _int(va_list val)
{
	int int_val;

	int_val = va_arg(val, int);
	printf("%d", int_val);
}

/**
 * _char - Function
 * @val: parameter
 */

void _char(va_list val)
{
	char char_val;

	char_val = va_arg(val, int);
	printf("%c", char_val);
}

/**
 * _float - Function
 * @val: parameter
 */

void _float(va_list val)
{
	float float_val;

	float_val = va_arg(val, double);
	printf("%f", float_val);
}

/**
 * _string - Function
 * @val: parameter
 */

void _string(va_list val)
{
	char *string_val;

	string_val = va_arg(val, char *);

	if (string_val == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", string_val);
	}
}


