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
	char *o;
	char *n;

	n = malloc(strlen(name) + 1);
	if (n == NULL)
		return (NULL);
	o = malloc(strlen(owner) + 1);
	if (o == NULL)
		return (NULL);
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
