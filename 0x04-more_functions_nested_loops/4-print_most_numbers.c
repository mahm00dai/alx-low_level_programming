#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, excluding 2 and 4,
 *                      followed by a new line.
 */
void print_most_numbers(void)
{
	char nums[] = "01356789";
	int i;

	/* Print each character in the nums string */
	for (i = 0; nums[i] != '\0'; i++)
	{
		_putchar(nums[i]);
	}

	/* Print the newline character */
	_putchar('\n');
}

