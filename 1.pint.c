#include "monty.h"

/**
 * _pint - opcode that prints the value at the top of the stack.
 * @head: head of the linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _pint(stack_t **head, unsigned int nline)
{
	UNUSED(nline);

	if (*head == NULL)
	{
		dprintf(2, "L%u: ", nline);
		dprintf(2, "can't pint, stack empty\n");
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
