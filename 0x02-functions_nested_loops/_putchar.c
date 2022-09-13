#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character a to stdout
 *
 * @a: character to print as an output
 *
 * Return: a charcter is returnded
 */

char _putchar(char a)
{
	return (write(1, &a, 1));
}
