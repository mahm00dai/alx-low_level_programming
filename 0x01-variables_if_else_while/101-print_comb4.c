#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *              Numbers must be separated by ', ', followed by a space.
 *              The three digits must be different.
 *              Print only the smallest combination of three digits.
 *              Numbers should be printed in ascending order.
 *              You can only use the putchar function (every other function
 *              is forbidden).
 *              You can only use putchar six times maximum in your code.
 *              You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

