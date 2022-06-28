#include "push_swap.h"

int	get_biggest(t_stack *stack)
{
	int	i;
	int	biggest;

	i = 0;
	biggest = 0;
	while (i < stack->size)
	{
		if (stack->arr[i] > stack->arr[biggest])
			biggest = i;
		i++;
	}
	return (biggest);
}