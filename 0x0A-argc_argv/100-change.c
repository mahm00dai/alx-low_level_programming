#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Calculates minimum number of coins needed for change.
 * @argc: Number of arguments passed to the program (should be 2).
 * @argv: Array of arguments passed to the program.
 * argv[1] should be the amount in cents.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(denominations) / sizeof(denominations[0]);

	for (int i = 0; i < num_coins; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", coins);

	return (0);
}

