#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes the sum of all multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int limit = 1024;

	for (int i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}

