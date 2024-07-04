#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result stored in buffer @r,
 * or 0 if result cannot fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j;

	strrev(n1);
	strrev(n2);

	for (i = 0; i < len1 || i < len2 || carry; i++)
	{
		if (i < len1)
			carry += n1[i] - '0';
		if (i < len2)
			carry += n2[i] - '0';

		if (i >= size_r - 1)
			return (0);

		r[i] = carry % 10 + '0';
		carry /= 10;
	}

	r[i] = '\0';

	strrev(r);

	return (r);
}

