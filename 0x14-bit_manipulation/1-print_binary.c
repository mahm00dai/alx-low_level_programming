#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)  // Check if n is greater than 1
	{
		print_binary(n >> 1);  // Recursively call with n shifted right
	}
	_putchar((n & 1) + '0');  // Print the least significant bit (0 or 1)
}

