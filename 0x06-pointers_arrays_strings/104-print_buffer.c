#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in a specific format.
 * @b: The buffer to print.
 * @size: Number of bytes to print from the buffer.
 *
 * Description:
 * - Prints the content of size bytes of the buffer pointed by b.
 * - Prints 10 bytes per line in hexadecimal and ASCII format.
 * - Prints lines even if size is 0 or less.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		printf(" ");

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] >= ' ' && b[i + j] <= '~')
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}

