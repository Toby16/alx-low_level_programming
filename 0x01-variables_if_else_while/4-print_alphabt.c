#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 101)
		{
			continue;
		}
		if (a == 113)
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');

	return (0);
}
