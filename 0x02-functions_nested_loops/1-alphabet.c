#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - print alphbet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - function main
 *
 * Return: nothing
 */
int main(void)
{
	print_alphbet();
	return (0);
}
