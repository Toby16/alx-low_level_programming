#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Function
 * @argc: argument
 * @argv: argument
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j, x;

	x = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
