#include "main.h"
/**
 * _isupper - check the character is uppercase or not
 *
 * @c: character to check
 *
 * Return: return 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
