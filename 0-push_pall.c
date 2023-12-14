#include "monty.h"

/**
 * _push - opcode that pushes an element to the stack.
 * @head: head of the linked list
 * @nline: line number.
 *
 * Return: nothing.
 */
void _push(stack_t **head, unsigned int nline)
{
	int i, element;

	if (!glob.argm)
	{
		dprintf(2, "L%u: ", nline);
		dprintf(2, "usage: push integer\n");
		free_glbvar();
		exit(EXIT_FAILURE);
	}

	for (i = 0; glob.argm[i] != '\0'; i++)
	{
		if (!isdigit(glob.argm[i]) && glob.argm[i] != '-')
		{
			dprintf(2, "L%u: ", nline);
			dprintf(2, "usage: push integer\n");
			free_glbvar();
			exit(EXIT_FAILURE);
		}
	}

	element = atoi(glob.argm);

	if (glob.lifo == 1)
	{
		add_dnodeint(head, element);
	}
	else
	{
		add_dnodeint_end(head, element);
	}
}

/**
 * _pall - opcode that prints all values on the stack,
 * starting from the top of the stack.
 * @head: head of the linked list.
 * @nline: line numbers.
 *
 * Return: nothing.
 */
void _pall(stack_t **head, unsigned int nline)
{
	stack_t *value;

	UNUSED(nline);

	value = *head;

	while (value)
	{
		printf("%d\n", value->n);
		value = value->next;
	}
}
