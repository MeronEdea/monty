#include "monty.h"

void pstr(stack_t **top, unsigned int line_number)
{
	stack_t *head = *top;

	(void)line_number;

	if ((top == NULL) || (*top == NULL))
	{
		printf("\n");
	}
	else
	{
		while (head != NULL)
		{
			if ((head->n > 0) && (isascii(head->n)))
			{
				printf("%c", head->n);
				head = head->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
