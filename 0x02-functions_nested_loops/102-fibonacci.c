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
	/* Number of Fibonacci numbers to print */
	int count = 50;
	unsigned long first = 1, second = 2, next;
	int i;	/* Declare i here */

	printf("%lu, %lu", first, second);

	for (i = 3; i <= count; ++i)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}

