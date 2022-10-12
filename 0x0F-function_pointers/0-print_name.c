#include <stdio.h>
/**
 * print_name - print the name
 * @name: the name to print
 * @(*f): function
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
