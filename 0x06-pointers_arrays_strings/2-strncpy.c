#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination buffer where the content is to be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Variables */
	int i;

	/* Copy src to dest, up to n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad the remaining bytes with null characters */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

