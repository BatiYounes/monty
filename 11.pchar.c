#include "monty.h"

/**
 * _pchar - opcode print the char value of the first element.
 * @head: head of the linked list
 * @nline: line number.
 *
 * Return: nothing.
 */
void _pchar(stack_t **head, unsigned int nline)
{
	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	if ((*head)->n < 0 || (*head)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*head)->n);
}
