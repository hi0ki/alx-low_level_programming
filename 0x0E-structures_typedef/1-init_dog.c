#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog to init
 * @age: dog's age
 * @name: dog's name
 * @owner: owenr's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = name;
		d->age = age;
	}
}
