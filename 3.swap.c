#include "monty.h"

/**
 * _swap - opcode that swaps the top two elements of the stack.
 * @head: head of the linked list.
 * @nline: line number.
 *
 * Return: nothing
 */
void _swap(stack_t **head, unsigned int nline)
{
	stack_t *element = *head;
	int i;

	i = 0;
	for (; element != NULL; element = element->next, i++)
	;

	if (i < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	element = *head;
	*head = (*head)->next;
	element->next = (*head)->next;
	element->prev = *head;
	(*head)->next = element;
	(*head)->prev = NULL;
}
