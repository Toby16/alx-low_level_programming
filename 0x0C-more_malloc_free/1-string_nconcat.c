#include "main.h"

/**
 * string_nconcat - Function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	j = n;

	for (i = 0; s1[i] != '\0'; i++)
		j += 1;

	ptr = malloc(sizeof(*ptr) * (j * 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	j = 0;

	for  (i = 0; s1[i]; i++)
	{
		ptr[j++] = s1[i];
	}

	for (i = 0; s2[i] &&  i < n; i++)
	{
		ptr[j++] = s2[i];
	}
	ptr[j] = '\0';
	return (ptr);
}
