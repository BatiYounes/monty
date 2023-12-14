#include "monty.h"

/**
 * _pop - opcode that removes the top element of the stack.
 * @head: head of the linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _pop(stack_t **head, unsigned int nline)
{
	stack_t *element;

	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	element = *head;
	*head = (*head)->next;
	free(element);
}
