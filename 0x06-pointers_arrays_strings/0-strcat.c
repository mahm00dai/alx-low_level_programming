#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Variables */
	int i, j;

	/* Find the end of dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append src to dest */
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}

