#include "monty.h"

/**
 * _rotr - opcode rotates the stack to the bottom.
 * @head: head of the linked list
 * @nline: line number.
 *
 * Return: void, no return
 */
void _rotr(stack_t **head, unsigned int nline)
{
	stack_t *stack_rot = NULL;

	UNUSED(nline);

	if (*head == NULL)
	{
		return;
	}

	if ((*head)->next == NULL)
	{
		return;
	}

	stack_rot = *head;

	for (; stack_rot->next != NULL; stack_rot = stack_rot->next)
		;

	stack_rot->prev->next = NULL;
	stack_rot->next = *head;
	stack_rot->prev = NULL;
	(*head)->prev = stack_rot;
	*head = stack_rot;
}
