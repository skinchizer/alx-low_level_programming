#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees list
 * @head: list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
