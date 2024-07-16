#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}

