#include <stdlib.h>
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
	int i, lenn, leno;

	lenn = 0;
	for (i = 0; name[i] != '\0'; i++)
		lenn++;
	n = malloc(sizeof(char) * (lenn + 1));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	leno = 0;
	for (i = 0; owner[i] != '\0'; i++)
		leno++;
	o = malloc(sizeof(char) (leno + 1));
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
	for (i = 0; i < lenn; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; i < leno; i++)
		o[i] = owner[i];
	o[i] = '\0';
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
