#include "main.h"
/**
 * malloc_checked - malloc a memeory
 *
 * @b: the amount of memeory you allocate
 *
 * Return: the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}
