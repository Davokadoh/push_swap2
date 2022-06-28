#include "push_swap.h"

void	bubble_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack->size)
	{
		j = i;
		while (j < stack->size)
		{
			if (stack->arr[i] > stack->arr[j])
			{
				tmp = stack->arr[i];
				stack->arr[i] = stack->arr[j];
				stack->arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}