#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - string to words
 *
 * @str: string to change it to words
 *
 * Return: two dimentional array of strings
 */
char **strtow(char *str)
{
	int count_word;
	int count_words;
	int count_tab;
	char *iterator;
	char **double_tab;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	count_word = 0;
	count_words = 0;
	iterator = str;
	while (*iterator != '\0')
	{
		if (*iterator != 32)
		{
			count_word++;
		}
		if (*iterator == 32 && *(iterator - 1) != 32 && count_word != 0)
		{
		count_words++;
		count_word = 0;
		}
		iterator++;
	}
	double_tab = malloc(sizeof(char *) * (count_words + 1));
	if (double_tab == NULL)
		return (NULL);
	iterator = str;
	count_tab = 0;
	count_word = 0;
	while (*iterator != '\0')
	{
		if (*iterator != 32)
		{
			count_word++;
		}
		if (*iterator == 32 && *(iterator - 1) != 32 && count_word != 0)
		{
				*(double_tab + count_tab) = malloc(count_word + 1);
				if (*(double_tab + count_tab) == NULL)
					return (NULL);
				count_tab++;
				count_word = 0;
			}
		iterator++;
	}
	iterator = str;
	count_words = 0;
	count_word = 0;
	while (*iterator != '\0')
	{
		if (*iterator != 32)
		{
			double_tab[count_words][count_word] = *iterator;
			count_word++;
		}
		if (*iterator == 32 && *(iterator - 1) != 32 && count_word != 0)
		{
			double_tab[count_words][count_word] = '\0';
			count_words++;
			count_word = 0;
		}
		iterator++;
	}
	double_tab[count_words] = NULL;
	return (double_tab);
}
