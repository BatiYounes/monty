#include "monty.h"

/**
 * _div - opcode divides the second element by the top element of the stack
 * @head: head of the dobly linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _div(stack_t **head, unsigned int nline)
{
	stack_t *element = *head;
	int i = 0;

	for (; element != NULL; element = element->next, i++)
		;

	if (i < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	element = (*head)->next;
	element->n /= (*head)->n;
	_pop(head, nline);
}
