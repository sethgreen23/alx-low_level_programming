#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_sep - print serpartor
 * @format: format string
 * @position: starting position
 * @found: found character
 *
 * Return: nothing
 */
void print_sep(const char *format, int position, int found)
{
	while (format[position] != '\0' && found)
	{
		if (format[position] == 'c' ||
		format[position] == 'i' ||
		format[position] == 'f' ||
		format[position] == 's')
		{
			printf(", ");
			break;
		}
		position++;
	}
}
/**
 * print_all - prints anything
 * @format: format string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	int i, found, j;
	char *str;

	va_start(lst, format);
	while (format != NULL && format[i] != '\0')
	{
		found = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				found = 1;
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				found = 1;
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				found = 1;
				break;
			case 's':
				str = va_arg(lst, char *);
				found = 1;
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
		print_sep(format, i + 1, found);
		i++;
	}
	va_end(lst);
	printf("\n");
}
