#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to compute.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -n % 10;
	else
		last_digit = n % 10;

	_putchar('0' + last_digit); /* Print the last digit */
	return (last_digit);
}

