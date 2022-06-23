#include "push_swap.h"

//Rotate or reverse rotate next element to push.
void	smart_rotate(t_stack *stack, int target)
{
	if (target > (stack->size - 1) / 2)
	{
		while (--target > 0)
			rev_rotate(stack);
	}
	else
	{
		while (--target > 0)
			rotate(stack);
	}
}