#include "monty.h"

void pall(stack_t **top, unsigned int line_number)
{
	stack_t *curr = *top;
	(void)line_number;

	while(curr != NULL)
	{
		printf("%d", curr->n);
		curr = curr->next;
		printf("\n");
	}
}

