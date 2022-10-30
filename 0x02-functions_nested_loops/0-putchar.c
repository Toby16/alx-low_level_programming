#include "main.h"

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char a[20] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');

	return (0);
}
