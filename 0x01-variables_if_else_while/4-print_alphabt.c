#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char ch_A;

	for (ch_A = 'a'; ch_A <= 'z'; ch_A++)
	{
		if (ch_A == 'e')
		{
			continue;
		}
		if (ch_A == 'q')
		{
			continue;
		}
		putchar(ch_A);
	}

	return (0);
}
