#include "push_swap.h"

void    swap(t_stack *stack)
{
    int tmp;

    tmp = stack->arr[0];
    stack->arr[0] = stack->arr[1];
    stack->arr[1] = tmp;
}