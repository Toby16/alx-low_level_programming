#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));



#endif
