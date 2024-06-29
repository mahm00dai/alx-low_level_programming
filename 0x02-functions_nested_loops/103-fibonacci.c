#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Computes the sum of even-valued Fibonacci terms
 * up to 4,000,000 and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	unsigned long long sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("", sum);

	return (0);
}

