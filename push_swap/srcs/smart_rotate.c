#include "push_swap.h"

//Rotate or reverse rotate next element to push.
void	smart_rotate(char ch, t_stack *stack, int target)
{
	int	target_value;

	target_value = stack->arr[target];

	while (stack->arr[0] != target_value)
	{
		if (target > ((stack->size) / 2))
			rev_rotate(ch, stack);
		else
			rotate(ch, stack);
	}
}