#include <stdio.h>

/**
 * str_concat - Function
 * @s1: parameter
 * @s2: parameter
 * Return: ptr (On Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, x, y;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}

	y = j;

	for (j = 0; j <= y; x++, j++)
	{
		ptr[x] = s2[j];
	}
	return (ptr);
}
