#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int value;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", value);
		return (0);
	}
}
