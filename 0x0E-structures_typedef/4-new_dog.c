#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
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
	char *nameCopy, *ownerCopy;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nameCopy = strdup(name);
	if (nameCopy == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = nameCopy;
	d->age = age;
	ownerCopy = strdup(owner);
	if (ownerCopy == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = ownerCopy;
	return (d);
}
