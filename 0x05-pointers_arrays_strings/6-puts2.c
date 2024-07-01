/* 6-puts2.c */
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: Pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string and print every other character */
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	/* Print a new line at the end */
	_putchar('\n');
}

