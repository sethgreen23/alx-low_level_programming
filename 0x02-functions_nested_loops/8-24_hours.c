#include <stdio.h>
/**
 * jack_bauer - return hours minutes
 *
 * Return: minutes and houres
 */
void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				printf("0%d", hours);
			}
			else
			{
				printf("%d", hours);
			}
			putchar(':');
			if (minutes < 10)
			{
				printf("0%d", minutes);
			}
			else
			{
				printf("%d", minutes);
			}
			printf("\n");
		}

	}

}
