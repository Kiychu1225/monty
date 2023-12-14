#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr -this prints the contents of a stack_t as a string
 * @stack:this is the stack given by main
 * @line_cnt:this is a line counter for error messages
 * return:returns nothing
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}
