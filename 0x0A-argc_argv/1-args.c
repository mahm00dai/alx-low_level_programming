#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed (including the program name)
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

