#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description:
 * Prints all numbers from n up to 98, separated by commas
 * and ending with a newline, using _putchar instead of printf.
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (; i < 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; i > 98; i--)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

