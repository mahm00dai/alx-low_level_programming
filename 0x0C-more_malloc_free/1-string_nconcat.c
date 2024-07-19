#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the newly allocated space in memory containing s1
 *         followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Use the entire string s2 if n is greater or equal to its length */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 to the concatenated string */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the concatenated string */
	concat[i] = '\0';

	return (concat);
}

