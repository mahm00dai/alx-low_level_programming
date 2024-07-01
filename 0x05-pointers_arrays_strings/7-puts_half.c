#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index based on even or odd length */
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	/* Print the second half of the string */
	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');  /* Print a newline at the end */
}

