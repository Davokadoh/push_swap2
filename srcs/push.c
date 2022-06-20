#include "push_swap.h"

//Copy first element of src in tmp.
//Move every element of src one position to the left.
//Move all elements of dst one position to the right.
//Move tmp to dst.
void    push(t_stack *src, t_stack *dst)
{
	int	tmp;

	tmp = src->arr[0];
	shift_left(src->arr, src->size);
	shift_right(dst->arr, dst->size);
	dst->arr[0] = tmp;
}