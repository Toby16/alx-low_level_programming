#include "main.h"
#include <stdio.h>

/**
 * main - Function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, int argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("s\n", argv[i]);
	}
	return (0);
}
