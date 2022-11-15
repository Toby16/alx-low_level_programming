#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - structure
 * @name: element
 * @age: element
 * @owner: element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
