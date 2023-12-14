#include "monty.h"

void (*exe(stack_t **head, char *op, unsigned int n))(stack_t**, unsigned int)
{
	int i;
	instruction_t operation[] = {
		{"pall", pall},
		{NULL, NULL}
	};

	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(operation[i].opcode, op) == 0)
		{
			return (operation[i].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", n, op);
	fclose(file);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
