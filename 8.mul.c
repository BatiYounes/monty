#include "monty.h"

/**
 * _mul - opcode multiplies the top element to the second top element of
 * the stack.
 * @head: head of the doubly linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _mul(stack_t **head, unsigned int nline)
{
	stack_t *element = *head;
	int i;

	i = 0;
	for (; element != NULL; element = element->next, i++)
		;

	if (i < 2)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	element = (*head)->next;
	element->n = element->n * (*head)->n;
	_pop(head, nline);
}
