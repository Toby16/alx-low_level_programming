#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int val_1, val_2;

	val_1 = 0;

	for (; val_1 < 9, val_1++)
	{
		for (val_2 = val_1 + 1; val_2 < 10; val_2++)
		{
			putchar((val_1 % 10) + '0');
			putchar((val_2 % 10) + '0');

			if ((val_1 == 8) && (val_2 == 9))
			{
			continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
