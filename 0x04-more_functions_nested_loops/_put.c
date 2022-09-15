#include <unisted.h>
#include "main.h"
/**
 * _putchar  - print a character
 *
 * @c: the character to print
 *
 * Return: return a character to the output screen
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
