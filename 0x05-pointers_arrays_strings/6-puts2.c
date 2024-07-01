#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: input string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;  /* move to every other character */
	}
	_putchar('\n');  /* print a newline at the end */
}

