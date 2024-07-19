#include "main.h"
#include <stdlib.h>

void print_error_and_exit(void);
int is_digit(char c);
int string_length(char *str);
void multiply(char *num1, char *num2);

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i;

	if (argc != 3)
		print_error_and_exit();

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (!is_digit(num1[i]))
			print_error_and_exit();
	}

	for (i = 0; num2[i]; i++)
	{
		if (!is_digit(num2[i]))
			print_error_and_exit();
	}

	multiply(num1, num2);
	return (0);
}

/**
 * print_error_and_exit - Prints an error message and exits with status 98.
 */
void print_error_and_exit(void)
{
	char error_msg[] = "Error\n";
	int i;

	for (i = 0; error_msg[i]; i++)
		_putchar(error_msg[i]);
	exit(98);
}

/**
 * is_digit - Checks if a character is a digit.
 * @c: Character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * string_length - Computes the length of a string.
 * @str: The string.
 *
 * Return: The length of the string.
 */
int string_length(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = string_length(num1);
	int len2 = string_length(num2);
	int len = len1 + len2;
	int *result;
	int i, j, product, pos1, pos2, sum;

	result = calloc(len, sizeof(int));
	if (result == NULL)
		print_error_and_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];

			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	i = 0;
	while (i < len && result[i] == 0)
		i++;

	if (i == len)
		_putchar('0');
	else
	{
		for (; i < len; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);
}

