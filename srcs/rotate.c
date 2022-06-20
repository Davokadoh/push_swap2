#include "push_swap.h"

//Copy first element of stack in tmp.
//Move every element of stack one position to the left.
//Copy tmp as first element of stack
void	rotate(t_stack *stack)
{
	int tmp;

	tmp = stack->arr[0];
	shift_left(stack->arr, stack->size);
	stack->size++;
	stack->arr[stack->size - 1] = tmp;
}

void	rev_rotate(t_stack *stack)
{
	int tmp;

	tmp = stack->arr[stack->size - 1];
	shift_right(stack->arr, stack->size);
	stack->size--;
	stack->arr[0] = tmp;
}