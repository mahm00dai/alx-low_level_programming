#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function prints the alphabet from 'a' to 'z' using
 *              the _putchar function. The entire alphabet and a newline
 *              character are printed using only two calls to _putchar.
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	/* Use _putchar twice to print the entire alphabet and a new line */
	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}

/**
 * main - Check the code for print_alphabet function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

