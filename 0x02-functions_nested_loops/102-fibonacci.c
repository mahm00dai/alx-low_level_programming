#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *              separated by commas and spaces
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 50;  /* Number of Fibonacci numbers to print */
	unsigned long long first = 1, second = 2, next;

	printf("%llu, %llu", first, second);

	int i;

	for (i = 3; i <= count; ++i)
	{
		next = first + second;
		printf(", %llu", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}

