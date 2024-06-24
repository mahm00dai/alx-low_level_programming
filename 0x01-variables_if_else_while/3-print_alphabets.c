#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	/* Print lowercase alphabet */
	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}

	/* Print uppercase alphabet */
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}

