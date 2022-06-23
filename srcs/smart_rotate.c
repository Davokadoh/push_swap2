#include "push_swap.h"

//Rotate or reverse rotate next element to push.
void	smart_rotate(char ch, t_stack *stack, int target)
{
	if (target > ((stack->size) / 2))
	{
		target = stack->size - target;
		while (target-- > 0)
			rev_rotate(ch, stack);
	}
	else
	{
		while (target-- > 0)
			rotate(ch, stack);
	}
}