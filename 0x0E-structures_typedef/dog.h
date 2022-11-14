#ifndef MAIN_H
#define MAIN_H

/**
 * dog_h - Typedef for struct dog
 */

typedef struct dog dog_h;

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

#endif
