#include "monty.h"

void free_stack(stack_t *stack)
{
	if (stack != NULL)
	{
		free_stack(stack->next);
		free(stack);
	}
}

