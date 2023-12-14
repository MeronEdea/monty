#include "monty.h"

void push(stack_t **top, char *operand, unsigned int line_number)
{
	stack_t *new;

	if (operand == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		fclose(file);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(operand);
	new->prev = NULL;
	if (*top != NULL)
	{
		new->next = *top;
		(*top)->prev = new;
	}
	else
		new->next = NULL;
	*top = new;
}


