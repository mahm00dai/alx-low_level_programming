/* 4-print_rev.c */
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	/* First, find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}

	/* Print a new line at the end */
	_putchar('\n');
}

