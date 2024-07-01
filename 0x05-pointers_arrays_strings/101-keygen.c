#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10	/* Adjust the length of the password as needed */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variables */
	int i;
	char password[PASSWORD_LENGTH + 1];	/* +1 for the null terminator */

	srand(time(0));	/* Seed the random number generator with current time */

	/* Generate random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		/* Generate random lowercase letters ('a' to 'z') */
		password[i] = 'a' + rand() % 26;
	}

	password[PASSWORD_LENGTH] = '\0';	/* Null-terminate the string */

	printf("%s\n", password);	/* Print the generated password */

	return 0;
}

