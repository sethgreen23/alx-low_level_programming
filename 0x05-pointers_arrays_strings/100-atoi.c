#include "main.h"
/**
 * _atoi - convert a string to an int
 *
 * @s: string to convert
 *
 * Return: Return and integer
 */
int _atoi(char *s)
{
	int i = 0, sign, start, count = 0, end, coefition = 1, number = 0, j, k;
	int minus = 0;

	if (s[0] ==  '\0')
		return (0);
	while (1)
	{
		if (s[i] >= 48 && s[i] <= 57)
			break;
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			minus++;
		i++;
	}
	sign = minus % 2 == 0 ? 1 : -1;
	coefition *= sign;
	start = i;
	while (1)
	{
		if (s[i] < 48 || s[i] > 57)
			break;
		count++;
		i++;
	}
	end = i - 1;
	for (j = 0; j < count - 1; j++)
		coefition *= 10;
	for (k = start; k <= end; k++)
	{
		number += (s[k] - 48) * coefition;
		coefition /= 10;
	}
	return (number);
}
