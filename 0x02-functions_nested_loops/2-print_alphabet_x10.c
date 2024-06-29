#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 *
 * Description: This function prints the alphabet from 'a' to 'z' followed
 *              by a new line, and repeats this 10 times. It uses _putchar
 *              function twice to achieve this.
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	/* Print the alphabet followed by a newline 10 times */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}

