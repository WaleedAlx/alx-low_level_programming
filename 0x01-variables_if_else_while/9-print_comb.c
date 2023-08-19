#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possibale combinations of single digit  number (1,2,3,4,5,6,7,8,9)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
