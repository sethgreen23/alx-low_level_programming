#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct _list - structure for printing various types
 * @str: string
 * @len: length of the string
 * @next: next pointer
 */
typedef struct _list
{
	char *str;
	int len;
	struct _list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
