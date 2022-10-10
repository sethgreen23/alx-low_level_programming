#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else

		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %s\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
