#include "push_swap.h"

void	swap(char ch, t_stack *stack)
{
	int tmp;

	tmp = stack->arr[0];
	stack->arr[0] = stack->arr[1];
	stack->arr[1] = tmp;
	write(1, "s", 1);
	write(1, &ch, 1);
	write(1, "\n", 1);
}