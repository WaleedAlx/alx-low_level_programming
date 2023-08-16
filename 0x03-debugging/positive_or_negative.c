#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 *
 * Description: Check if positive or negative
 *
 * int i: number recieved to check
 */
void positive_or_negative(int i)
{
	/* i is the recieved number to check*/
	int n = i;

		if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
