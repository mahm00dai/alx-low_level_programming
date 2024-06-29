#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 *              where the values do not exceed 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initialize variables */
	unsigned long first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;

	}

	printf("\nSum of even-valued terms: %lu\n", sum);

	return (0);
}

