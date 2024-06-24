#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *              Numbers range from 00 to 99.
 *              Numbers should be printed with two digits.
 *              Combinations must be separated by comma and space ', '.
 *              Combinations should be printed in ascending order.
 *              00 01 and 01 00 are considered the same combination.
 *              You can only use the putchar function.
 *              You can only use putchar eight times maximum in your code.
 *              You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, units1, tens2, units2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (units1 = 0; units1 <= 9; units1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				int start = (tens2 == tens1) ? units1 + 1 : 0;

				for (units2 = start; units2 <= 9; units2++)
				{
					putchar(tens1 + '0');
					putchar(units1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(units2 + '0');
					if (!(tens1 == 9 && units1 == 8 && tens2 == 9 && units2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

