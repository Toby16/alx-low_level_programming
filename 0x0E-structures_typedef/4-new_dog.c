#include "dog.h"

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, name_len, owner_len;

	name_len = 0;
	owner_len = 0;
	ptr = malloc(sizeof(*ptr));

	if ((ptr == NULL) || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		name_len += 1;

	for (i = 0; owner[i]; i++)
		owner_len += 1;

	ptr->name = malloc(name_len + 1);
	ptr->owner = malloc(owner_len + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < owner_len; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
