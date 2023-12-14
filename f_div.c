#include "monty.h"

void div_op(int *stack, int *top) {
    if (*top < 2) {
        printf("Error: L%d: can't div, stack too short\n", __LINE__);
        exit(EXIT_FAILURE);
    }

    int top_element = stack[*top - 1];
    int second_top_element = stack[*top - 2];

    if (top_element == 0) {
        printf("Error: L%d: division by zero\n", __LINE__);
        exit(EXIT_FAILURE);
    }

    stack[*top - 2] = second_top_element / top_element;
    (*top)--;

    printf("Stack: ");
    for (int i = 0; i < *top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
