#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char ch_A, ch_B;
	for(ch_A = 'a'; ch_A <= 'z'; ch_A++)
	{
		putchar(ch_A);
	}
	for(ch_B = 'A'; ch_B <= 'Z'; ch_B++)
	{
		putchar(ch_B);
	}
	putchar('\n');

	return(0);
}
