#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i;
	char nums[] = "0123456789";

	/* Print the digits from 0 to 9 */
	for (i = 0; nums[i] != '\0'; i++)
	{
		_putchar(nums[i]);
	}

	/* Print the newline character */
	_putchar('\n');
}

