#include "push_swap.h"

t_stack	create_empty_stack(int size)
{
	t_stack	stack;
	
	stack.size = size;
	stack.arr = (int *)malloc(sizeof(int) * size);
	return (stack);
}