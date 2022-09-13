#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if the integer is character or not
 *
 * @alpha: is the integer we check
 *
 * Return: return 0 or 1
 */

int _isalpha(int alpha)
{
	if ((alpha >= 97 && alpha <= 122) || (alpha >= 65 && alpha <= 90))
		return (1);
	return (0);
}
