#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Prints the first 98 Fibonacci numbers separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Initialize first two Fibonacci numbers */
	unsigned long first = 1, second = 2;
	unsigned int count;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", first, second);

	/* Print the remaining Fibonacci numbers up to the 98th */
	for (count = 3; count <= 98; ++count)
	{
		/* Calculate the next Fibonacci number */
		unsigned long next = first + second;

		/* Print the Fibonacci number followed by ", " except for the last one */
		printf(", %lu", next);

		/* Update first and second for the next iteration */
		first = second;
		second = next;
	}

	/* Print newline at the end */
	printf("\n");

	return (0);
}

