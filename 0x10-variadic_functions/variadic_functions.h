#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - structure
 * @symb: element
 * @print: Function pointer element
 */

typedef struct printer
{
	char *symb;
	void (*print)(va_list val);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
