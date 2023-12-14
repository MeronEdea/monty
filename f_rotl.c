#include "monty.h"

void rotl(stack_t **top, unsigned int line_number)
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
		while (last->next != NULL)
		{
			last = last->next;
		}
		*top = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*top)->prev = NULL;
	}
}
