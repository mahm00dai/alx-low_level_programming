#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variables */
	int i;
	int length = 10;
	char password[length + 1];

	srand(time(0));

	/* Generate random password */
	for (i = 0; i < length; i++)
	{
		/* Generate random lowercase letters ('a' to 'z') */
		password[i] = 'a' + rand() % 26;
	}

	password[length] = '\0';

	printf("%s\n", password);

	return (0);
}

