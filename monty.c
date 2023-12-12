#include "monty.h"

int stack[STACK_SIZE];
int top = -1;

/**
 * Pushes an integer value onto the stack.
 *
 * @param value        The integer value to be pushed.
 * @param line_number  The line number where the push operation is performed.
 */
void push(int value, int line_number) {
    if (top >= STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }

    char str_value[20];
    sprintf(str_value, "%d", value);

    if (strlen(str_value) == 0) {
        printf("L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    char* endptr;
    long converted_value = strtol(str_value, &endptr, 10);

    if (*endptr != '\0' || endptr == str_value) {
        printf("L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (converted_value < INT_MIN || converted_value > INT_MAX) {
        printf("L%d: integer out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack[++top] = (int)converted_value;
}

/**
 * Prints the values in the stack from top to bottom.
 */
void pall() {
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
