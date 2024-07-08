#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to char (double pointer)
 * @to: pointer to char (string to set)
 *
 * Description: Sets the value of a pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

