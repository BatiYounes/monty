#include "monty.h"

/**
 * _rotl - opcode rotates the first element to the bottom and
 * the second to the top.
 * @head: head of the doubly linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _rotl(stack_t **head, unsigned int nline)
{
	stack_t *tmp = NULL, *element = NULL;

	UNUSED(nline);

	if (*head == NULL)
	{
		return;
	}

	if ((*head)->next == NULL)
	{
		return;
	}

	tmp = (*head)->next;
	element = *head;

	for (; element->next != NULL; element = element->next)
		;

	tmp->prev = NULL;
	element->next = *head;
	(*head)->next = NULL;
	(*head)->prev = element;
	*head = tmp;
}
