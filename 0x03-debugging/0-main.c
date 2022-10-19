#include "main.h"
#include "positive_or_negative.c"

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = 98 % 2;

	positive_or_negative(r);

	return (0);
}
