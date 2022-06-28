#include "push_swap.h"

void	rotate(char ch, t_stack *stack)
{
	int tmp;

	tmp = stack->arr[0];
	shift_left(stack->arr, stack->size);
	stack->arr[stack->size - 1] = tmp;
	write(1, "r", 1);
	write(1, &ch, 1);
	write(1, "\n", 1);
}

void	rev_rotate(char ch, t_stack *stack)
{
	int tmp;

	tmp = stack->arr[stack->size - 1];
	shift_right(stack->arr, stack->size);
	stack->arr[0] = tmp;
	write(1, "rr", 2);
	write(1, &ch, 1);
	write(1, "\n", 1);
}