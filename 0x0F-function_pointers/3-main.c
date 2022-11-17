#include "3-calc.h"

/**
 * main - Function
 * @argc: parameter
 * @argv: parameter
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*ptr)(int, int);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(x, y));
	return (0);
}
