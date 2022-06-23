#include "push_swap.h"

void	push(t_stack *src, t_stack *dst)
{
	int	tmp;

	tmp = src->arr[0];
	shift_left(src->arr, src->size);
	shift_right(dst->arr, dst->size);
	dst->arr[0] = tmp;
	src->size--;
	dst->size++;
}