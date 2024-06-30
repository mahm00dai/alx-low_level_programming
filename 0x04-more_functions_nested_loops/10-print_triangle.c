#include "main.h"

/**
 * print_triangle - prints a triangle of size `size` using `#` characters
 * @size: size of the triangle to print
 */
void print_triangle(int size)
{
	int i, j;

	/* Check if size is 0 or less */
	if (size <= 0)
	{
		_putchar('\n'); /* Print only a newline character */
		return; /* Exit the function */
	}

	/* Loop to print each line of the triangle */
	for (i = 1; i <= size; i++)
	{
		/* Print spaces before the # characters */
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		/* Print # characters */
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		/* Print newline character after each row */
		_putchar('\n');
	}
}

