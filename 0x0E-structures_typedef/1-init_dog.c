#include<stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialise a dog
 *
 * @d: the dog
 * @name: dog name;
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
