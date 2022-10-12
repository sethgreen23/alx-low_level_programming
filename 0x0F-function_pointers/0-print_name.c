#include <stdio.h>
/**
 * print_name - print the name
 * @name: the name to print
 * @(*f): function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
