#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint:this prints print the top data
 * @stack:this is the stack given by main
 * @line_cnt:this is the ammount of lines
 * return:returns void
 */
void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
