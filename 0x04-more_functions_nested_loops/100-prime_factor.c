#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n = 612852475;
	unsigned int largest = 0;
	unsigned int factor = 2;

	/* Check for number of 2s */
	while (n % factor == 0)
	{
		largest = factor;
		n = n / factor;
	}

	/* Check for odd factors from 3 onwards */
	factor = 3;
	while (factor * factor <= n)
	{
		while (n % factor == 0)
		{
			largest = factor;
			n = n / factor;
		}
		factor += 2; /* Move to next odd number */
	}

	/* Handle the case when n itself is a prime number */
	if (n > 1)
		largest = n;

	printf("%u\n", largest);

	return (0);
}

