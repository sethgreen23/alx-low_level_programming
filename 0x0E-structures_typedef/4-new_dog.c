#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strdup - copy a string
 * @str: string to copy
 *
 * Return: copied string
 */
char *_strdup(char *str)
{
	char *copy;
	int i;

	copy = (char *)malloc(sizeof(char) * (strlen(str) + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';
	return (copy);
}
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
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
