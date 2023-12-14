#include "monty.h"

/**
* rotl:this rotates the first element of the stack
* @stack:this is the stack head
* @line_count:this is a line count
* return:returns void
*/
void rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *left;
	stack_t *right;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next) /*this moves the right pointer to the last node */
		right = right->next;
	right->next = left; /* this is a circle of infinite linked list loop */
	left->prev = right;
	*stack = left->next; /* it cuts the link between the 0 and 1 element */
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
