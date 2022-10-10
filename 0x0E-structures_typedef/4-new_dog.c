#include<stdio.h>
#include<string.h>
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
	dog_t *d;
	char *o;
	char *n;
	int i;

	n = malloc(strlen(name) + 1);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	o = malloc(strlen(owner) + 1);
	if (o == NULL)
	{
		free(o);
		free(n);
		return (NULL);
	}
	d = malloc(sizeof(struct dog *));
	if (d == NULL)
	{
		free(n);
		free(o);
		free(d);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; i < strlen(owner); i++)
		o[i] = owner[i];
	o[i] = '\0';
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
