#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer value of the converted string
 */
int _atoi(char *s)
{
	/* Variables */
	int i = 0;
	int sign = 1;
	int num = 0;

	/* Handle signs */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Process numeric characters */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		if (num > (INT_MAX / 10) ||
				(num == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}

