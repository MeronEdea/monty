#include "monty.h"

void pop(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	*top = (*top)->next;
	if (temp->next != NULL)
	{
		temp->next->prev = NULL;
	}
	free(temp);
}
