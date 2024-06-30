#include "main.h"

/**
 * print_square - prints a square of size `size` using `#` characters
 * @size: size of the square to print
 */
void print_square(int size)
{
	int i, j;

	/* Check if size is 0 or less */
	if (size <= 0)
	{
		_putchar('\n'); /* Print only a newline character */
		return; /* Exit the function */
	}

	/* Loop to print each line of the square */
	for (i = 0; i < size; i++)
	{
		/* Loop to print each column of the square */
		for (j = 0; j < size; j++)
		{
			_putchar('#'); /* Print the '#' character */
		}
		_putchar('\n'); /* Print a newline character after each row */
	}
}

