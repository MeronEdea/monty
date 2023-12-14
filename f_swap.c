#include "monty.h"

void swap(stack_t **top, unsigned int line_number)
{
	stack_t *firstTop, *secondTop;

	if ((*top == NULL) || ((*top)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	else if (*top != NULL)
	{
		firstTop = *top;
		secondTop = firstTop->next;
		*top = secondTop;
		firstTop->next = secondTop->next;
		if (secondTop->next != NULL)
		{
			secondTop->next->prev = firstTop;
		}
		secondTop->prev = NULL;
		secondTop->next = firstTop;
		firstTop->prev = secondTop;
	}
}
