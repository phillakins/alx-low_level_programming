#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0.
 *
 * return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = 1 % 10;
	if (n > 5)
	{
		printf("Last digit of n is %d, and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d, and is 0\n", n);
	}
	else if (n < 6 != 0)
	{
		printf("Last digit of n is %d, and is less than 6 and not 0\n", n);
	}
	return (0);
}
