#include "monty.h"

void add(stack_t **top, unsigned int line_number)
{
	stack_t *firstTop, *secondTop;

	if ((*top == NULL) || ((*top)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	else
	{
		firstTop = *top;
		secondTop = firstTop->next;
		secondTop->n += firstTop->n;
		*top = secondTop;
		(*top)->prev = NULL;
		free(firstTop);
	}
}