#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int print_comma = 0;

    va_start(args, format);
    while (format && format[i])
    {
        if (print_comma)
            _putchar(',');  /* Use _putchar to print comma */
        print_comma = 1;

        if (format[i] == 'c')
        {
            _putchar(va_arg(args, int));
        }
        if (format[i] == 'i')
        {
            int num = va_arg(args, int);
            if (num < 0)
                _putchar('-');  /* Print negative sign */
            num = (num < 0) ? -num : num;
            if (num == 0)
                _putchar('0');
            while (num > 0)
            {
                _putchar((num % 10) + '0');
                num /= 10;
            }
        }
        if (format[i] == 'f')
        {
            float num = va_arg(args, double);  /* float promoted to double */
            int int_part = (int)num;
            float frac_part = num - int_part;
            int frac_int;

            if (num < 0)
                _putchar('-');  /* Print negative sign */
            int_part = (int_part < 0) ? -int_part : int_part;
            while (int_part > 0)
            {
                _putchar((int_part % 10) + '0');
                int_part /= 10;
            }
            _putchar('.');
            frac_part *= 1000000;  /* Print 6 decimal places */
            frac_int = (int)frac_part;
            while (frac_int > 0)
            {
                _putchar((frac_int % 10) + '0');
                frac_int /= 10;
            }
        }
        if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str == NULL)
                str = "(nil)";
            while (*str)
                _putchar(*str++);
        }
        i++;
    }
    _putchar('\n');
    va_end(args);
}

