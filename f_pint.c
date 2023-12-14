#include "monty.h"

void pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
