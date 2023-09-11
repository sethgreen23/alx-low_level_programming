#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initilise dog structre
 * @d: dog structre
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
	}
}
