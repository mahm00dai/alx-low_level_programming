#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i;
	char *ptr = str;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; *ptr != '\0'; ptr++)
	{
		for (i = 0; alphabet[i] != '\0'; i++)
		{
			if (*ptr == alphabet[i])
			{
				*ptr = rot13[i];
				break;
			}
		}
	}

	return (str);
}

