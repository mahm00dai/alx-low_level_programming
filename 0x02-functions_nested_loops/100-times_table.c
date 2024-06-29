#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table limit (0 <= n <= 15)
 *
 * Description:
 * Prints the times table from 0 to n using _putchar instead of printf.
 * Numbers are separated by commas and spaces, rows are separated by newlines.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			product = i * j;

			_putchar(',');
			_putchar(' ');

			if (product >= 100)
				_putchar((product / 100) + '0');
			else
				_putchar(' ');

			if (product >= 10)
				_putchar(((product / 10) % 10) + '0');
			else
				_putchar(' ');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

