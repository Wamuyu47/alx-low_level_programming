#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
