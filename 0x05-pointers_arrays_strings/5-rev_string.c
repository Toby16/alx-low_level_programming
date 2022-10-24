#include "main.h"

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char value;

	while (s[y++])
	{
		x++;
	}

	for (y = x - 1; y >= x / 2; y--)
	{
		value = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = value;
	}
}
