#include "monty.h"

void rotr(stack_t **top, unsigned int line_number)
{
	stack_t *first, *last;

	(void)line_number;

	if ((*top == NULL) || ((*top)->next == NULL))
	{
		;
	}
	else
	{
		first = last = *top;
		while (last->next)
		{
			last = last->next;
		}
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = first;
		first->prev = last;
		*top = last;
	}
}
