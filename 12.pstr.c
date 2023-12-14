#include "monty.h"

/**
 * _pstr - opcod prints the string of the stack.
 * @head: head of the doubly linked list.
 * @nline: line number.
 *
 * Return: nothing.
 */
void _pstr(stack_t **head, unsigned int nline)
{
	stack_t *int_to_char = *head;

	UNUSED(nline);

	while (int_to_char && int_to_char->n > 0 && int_to_char->n < BUFFER)
	{
		printf("%c", int_to_char->n);
		int_to_char = int_to_char->next;
	}

	printf("\n");
}
