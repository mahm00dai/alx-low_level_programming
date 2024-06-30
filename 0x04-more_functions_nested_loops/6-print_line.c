#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
 */
void print_line(int n)
{
	int i;

	/* Check if n is greater than 0 to print underscores */
	if (n > 0)
	{
		/* Print '_' n times */
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	/* Print the newline character */
	_putchar('\n');
}

