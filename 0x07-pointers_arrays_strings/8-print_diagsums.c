#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_primary = 0;
	int sum_secondary = 0;
	char buffer[20];

	for (i = 0; i < size; i++)
	{
		sum_primary += *(a + i * size + i);
		sum_secondary += *(a + i * size + (size - 1 - i));
	}

	int primary = sprintf(buffer, "%d", sum_primary);

	buffer[primary_length] = ',';
	int secondary = sprintf(buffer + primary + 1, " %d", sum_secondary);

	for (i = 0; i < primary + secondary + 1; i++)
	{
		_putchar(buffer[i]);
	}
	_putchar('\n');
}

