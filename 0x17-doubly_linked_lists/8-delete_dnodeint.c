#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL) /* Empty list */
		return (-1);

	/* If the node to be deleted is the first node */
	if (index == 0)
	{
		*head = temp->next; /* Move head to next node */
		if (*head != NULL)  /* Adjust previous pointer if list isn't empty */
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL) /* If index is out of bounds */
		return (-1);

	/* Adjust pointers to remove the node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp); /* Free the memory of the node */
	return (1);
}

