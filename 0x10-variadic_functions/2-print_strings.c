#include "variadic_functions.h"

/**
 * print_strings - Function
 * @separator: parameter
 * @n: parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(list, char *));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char *);

			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			else
			{
				printf("%s", str);

				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
		}
	}
	printf("\n");
	va_end(list);
}
