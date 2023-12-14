#include "monty.h"

void pchar(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*top)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*top)->n);
}
