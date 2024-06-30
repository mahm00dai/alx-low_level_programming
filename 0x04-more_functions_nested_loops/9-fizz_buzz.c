#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiples of 3 with Fizz,
 *        multiples of 5 with Buzz, and multiples of both with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" "); /* Separate each number/word by a space */

		/* Print a newline after every 10 numbers for readability */
		if (i % 10 == 0)
			printf("\n");
	}

	printf("\n"); /* Ensure the output ends with a newline */
	return (0);
}

