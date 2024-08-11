#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m; /* XOR to find differing bits */
	count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1; /* Increment count if least significant bit is 1 */
		xor_result >>= 1; /* Shift right by 1 to check the next bit */
	}

	return (count);
}

