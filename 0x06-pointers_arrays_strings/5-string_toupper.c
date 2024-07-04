#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	/* Pointer to iterate through the string */
	char *ptr = str;

	/* Iterate through each character of the string */
	while (*ptr != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase to uppercase */
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++; /* Move to the next character */
	}

	return (str); /* Return the modified string */
}

