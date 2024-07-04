#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	int digit;
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n != 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
	}

	if (is_negative)
		_putchar('-');
}

