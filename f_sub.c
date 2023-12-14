#include "monty.h"

void sub(int *stack, int *top) {
    if (*top < 2) {
        printf("Error: can't sub, stack too short\n");
        exit(EXIT_FAILURE);
    }

    int top_element = stack[*top - 1];
    int second_top_element = stack[*top - 2];

    stack[*top - 2] = second_top_element - top_element;
    (*top)--;

    for (int i = 0; i < *top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
