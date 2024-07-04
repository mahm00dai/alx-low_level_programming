#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;
	/* Flag to indicate if next character should be capitalized */

	while (str[i] != '\0')
	{
		/* Check if current character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1; /* Next character should be capitalized */
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && cap_next)
		{
			/* Capitalize current character */
			str[i] = str[i] - 'a' + 'A';
			cap_next = 0; /* Reset flag after capitalizing */
		}
		else
		{
			cap_next = 0; /* Reset flag if current character is already capitalized */
		}

		i++; /* Move to the next character */
	}

	return (str); /* Return the modified string */
}

