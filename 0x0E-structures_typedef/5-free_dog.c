#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free the dog
 * @d: is the dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(&(d->age));
		free(d);
	}
}
