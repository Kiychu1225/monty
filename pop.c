#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop -this  pops the very top(kinda funny)
* @stack:this is the  stack given by main
* @line_cnt:this is the line number for error messages
* return:returns void
*/
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return; /*it  prevents errors that might cause next line to assign a NULL */
	(*stack)->prev = NULL;
}
