#include<stdio.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	d_t *dog;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
