#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *              Numbers must be separated by ', ', followed by a space.
 *              The two digits must be different.
 *              Print only the smallest combination of two digits.
 *              Numbers should be printed in ascending order, with two digits.
 *              You can only use the putchar function (every other function
 *              is forbidden).
 *              You can only use putchar five times maximum in your code.
 *              You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

