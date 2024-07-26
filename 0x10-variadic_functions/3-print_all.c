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

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
		}
		else
		{
			i++;
			continue;
		}

		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' ||
			format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}

