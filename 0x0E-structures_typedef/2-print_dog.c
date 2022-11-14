#include "dog.h"

/**
 * print_dog - Function
 * @d: element
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", ((*d).name));
		}

		if (age < 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %d\n", ((*d).age));
		}

		if (!((*d).owner))
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", ((*d).owner));
		}
	}
}
