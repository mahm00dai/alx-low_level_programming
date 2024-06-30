#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	int digit, is_negative = 0;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		/* Handle special case for INT_MIN */
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
		{
			n = -n;
		}
	}

	/* Print each digit by extracting from the least significant */
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		/* Extract and print each digit */
		int scale = 1;

		while (n / scale >= 10)
			scale *= 10;

		while (scale > 0)
		{
			digit = n / scale;
			_putchar(digit + '0');
			n -= digit * scale;
			scale /= 10;
		}
	}
}

