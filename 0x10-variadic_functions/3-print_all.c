#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int is_first = 1;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			if (!is_first)
				printf(", ");
			printf("%c", va_arg(args, int));
			is_first = 0;
		}
		else if (format[i] == 'i')
		{
			if (!is_first)
				printf(", ");
			printf("%d", va_arg(args, int));
			is_first = 0;
		}
		else if (format[i] == 'f')
		{
			if (!is_first)
				printf(", ");
			printf("%f", va_arg(args, double));
			is_first = 0;
		}
		else if (format[i] == 's')
		{
			if (!is_first)
				printf(", ");
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			is_first = 0;
		}
		i++;
	}

	va_end(args);
	if (!is_first)
		printf("\n");
}

