#include "lists.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		print_number(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}

	return (count);
}

