#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog structre
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
