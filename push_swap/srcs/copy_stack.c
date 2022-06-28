#include "push_swap.h"

t_stack	copy_stack(t_stack *src)
{
	t_stack	new;
	int		i;

	new.size = src->size;
	new.arr = (int *)malloc(sizeof(int) * (new.size));
	i = -1;
	while (++i < new.size)
		new.arr[i] = src->arr[i];
	return (new);
}