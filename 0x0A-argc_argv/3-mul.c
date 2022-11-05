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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
	}
}
