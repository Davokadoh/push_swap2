#include "push_swap.h"

int	get_smallest(t_stack *stack)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = 0;
	while (i < stack->size)
	{
		if (stack->arr[i] < stack->arr[smallest])
			smallest = i;
		i++;
	}
	return (smallest);
}