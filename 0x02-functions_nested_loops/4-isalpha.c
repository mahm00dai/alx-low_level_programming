#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Description: This function checks if the input character is a letter,
 * either lowercase or uppercase, by verifying if it falls within the
 * ASCII range of 'a' to 'z' or 'A' to 'Z'.
 *
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

