#include "monty.h"

/**
 * pall -this prints the stack
 * @stack:this is the stack given by main
 * @line_cnt:this is  ammount of lines
 * return:returns  void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
