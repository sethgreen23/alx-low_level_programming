#include <stdio.h>
#include "main.h"
/**
 * _islower - check integer intered is lowercase of not
 *
 * @alpha: is the integer we will check
 *
 * Return: return 1 if lowercase and 1 is not
 */

int _islower(int alpha)
{
	if (alpha >= 97 && alpha <= 122)
		return (1);
	return (0);
}
