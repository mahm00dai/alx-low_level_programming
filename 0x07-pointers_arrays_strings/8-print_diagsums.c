#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Description: Prints the sum of the diagonals of a square matrix.
 * The primary diagonal runs from the top-left to the bottom-right,
 * and the secondary diagonal runs from the top-right to the bottom-left.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_primary = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_primary += *(a + i * size + i);
		sum_secondary += *(a + i * size + (size - 1 - i));
	}

	char primary_sum_str[20];
	int primary_length = sprintf(primary_sum_str, "%d", sum_primary);

	primary_sum_str[primary_length] = ',';

	char secondary_sum_str[20];
	int secondary_length = sprintf(secondary_sum_str, " %d", sum_secondary);

	for (i = 0; i < primary_length + secondary_length + 1; i++)
	{
		_putchar(primary_sum_str[i]);
	}
	_putchar('\n');
}

