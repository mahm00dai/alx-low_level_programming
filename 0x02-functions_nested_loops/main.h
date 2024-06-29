#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase followed by a new line
 *
 * Description: This function prints the alphabet from 'a' to 'z' using
 *              the _putchar function. The entire alphabet and a newline
 *              character are printed using only two calls to _putchar.
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}
#endif /* MAIN_H */

