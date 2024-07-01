/* 5-rev_string.c */
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Swap characters from the beginning and end of the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

