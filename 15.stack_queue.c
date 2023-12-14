#include "monty.h"

/**
 * _stack - opcode sets the format fo the data to a stack (LIFO).
 * @head: head of the doubly linked list.
 * @nline: line number
 *
 * Return: nothing.
 */
void _stack(stack_t **head, unsigned int nline)
{
	UNUSED(nline);
	UNUSED(head);

	glob.lifo = 1;
}

/**
 * _queue - opcode sets the format of the data to a queue (FIFO).
 * @head: head of the doubly linked list
 * @nline: line number.
 *
 * Return: nothing.
 */
void _queue(stack_t **head, unsigned int nline)
{
	UNUSED(head);
	UNUSED(nline);

	glob.lifo = 0;
}
