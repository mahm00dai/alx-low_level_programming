#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	/* Declare variables for loop control */
	int i, j;

	/* Check if n is less than or equal to 0 */
	if (n <= 0)
	{
		/* Print a newline character if n is 0 or negative */
		_putchar('\n');
		return; /* Exit the function */
	}

	/* Loop through each line of the diagonal */
	for (i = 0; i < n; i++)
	{
		/* Print leading spaces for the diagonal */
		for (j = 0; j < i; j++)
		{
			_putchar(' '); /* Print a space character */
		}
		_putchar('\\'); /* Print the backslash character */
		_putchar('\n'); /* Print a newline character */
	}
}

