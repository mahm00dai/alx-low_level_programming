#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 612852475143;
	int largest = 0;
	int i;

	/* Check for number of 2s */
	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	/* n must be odd at this point, thus a skip of 2 */
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	/* handle the case when n is a prime number greater than 2 */
	if (n > 2)
		largest = n;

	printf("%d\n", largest);

	return (0);
}

