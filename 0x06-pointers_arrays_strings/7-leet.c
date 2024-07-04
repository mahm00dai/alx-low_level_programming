#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char leet_letters[5] = {'o', 'l', 'e', 'a', 't'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_letters[j] || str[i] == leet_letters[j] - 'a' + 'A')
			{
				str[i] = leet_map[j + 2];
				break;
			}
		}
	}

	return (str);
}

