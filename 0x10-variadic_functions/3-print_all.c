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
	int first = 1;

	va_start(args, format);

	while (format && format[i])
	{
		int print_separator = 0;

		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			print_separator = 1;
		}

		if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			print_separator = 1;
		}

		if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			print_separator = 1;
		}

		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			print_separator = 1;
		}

		if (print_separator && format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}

