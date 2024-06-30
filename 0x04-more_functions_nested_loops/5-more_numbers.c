#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14,
 * ten times, followed by a new line.
 */
void more_numbers(void)
{
	int i, j;
	char nums[] = "01234567891011121314\n";
	/* String containing the numbers 0-14 followed by a newline */

	/* Print the sequence 10 times */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; nums[j] != '\0'; j++)	/* Iterate through the nums string */
		{
			_putchar(nums[j]);				/* Print each character */
		}
	}
}

