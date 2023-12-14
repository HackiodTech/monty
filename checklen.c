#include "monty.h"

/**
 * check_Len-> Checks the len of a stack
 * @stack: The stack to be checked
 */

int check_Len(stack_t *stack)
{
    int len = 0;

    while (stack)
    {
        stack = stack->next;
        len++;
    }
    return (len);
}