#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: Argument
 * @argv: Argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins_number, val;

	coins_number = 0;

	val = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (val < 0)
		{
			printf("0\n");
		}
		else
		{
			while (val > 0)
			{
				coins_number += 1;

				if (val >= 25)
					val -= 25;
				else if (val >= 10)
					val -= 10;
				else if (val >= 5)
					val -= 5;
				else if (val >= 2)
					val -= 2;
				else if (val >= 1)
					val -= 1;
			}
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
