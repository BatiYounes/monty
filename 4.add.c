#include "monty.h"

/**
* _add - opcode that adds the top two elements of the stack.
* @head: head of the linked list.
* @nline: line number.
*
* Return: nothing.
*/
void _add(stack_t **head, unsigned int nline)
{
	int i;
	stack_t *element = *head;

	i = 0;
	for (; element != NULL; element = element->next, i++)
		;

	if (i < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", nline);
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	element = (*head)->next;
	element->n = element->n + (*head)->n;
	_pop(head, nline);
}
