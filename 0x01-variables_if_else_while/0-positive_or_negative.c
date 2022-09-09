#include <stdlib.h>
#include <time.h>
/*
 * main - main function
 *
 * Return: print if the number is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX /2;
	if (n > 0) {
		printf("is positive\n");
	}else if (n < 0) {
		printf("is negative\n");
	}else {
		printf("is zero\n");
	}
}
