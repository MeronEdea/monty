#include "monty.h"

int main(int argc, char *argv[])
{
	char *line, *ops, *operand;
	size_t size = 1024, count_line = 0;
	stack_t *head = NULL;
	void (*operator_f)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	file = fopen(argv[1], "r");
	if (file == NULL)
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
	line = malloc(size);
	while(1)
	{
		if (getline(&line, &size, file) == -1)
			break;
		count_line++;
		ops = strtok(line, "\n ");
		if (ops == NULL)
			;
		else if (strcmp("push", ops) == 0)
		{
			operand = strtok(NULL, "\n ");
			push(&head,operand, count_line);
		}
		else if (ops[0] != '#')
		{
			operator_f = exe(&head, ops, count_line);
			operator_f(&head, count_line);
		}
	}
	fclose(file);
	free(line);
	free_stack(head);
	return (0);
}


