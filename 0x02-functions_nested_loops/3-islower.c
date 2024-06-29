#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function checks if the input character is a lowercase
 * letter by verifying if it falls within the ASCII range of 'a' to 'z'.
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

