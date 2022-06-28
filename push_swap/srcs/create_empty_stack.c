#include "push_swap.h"

t_stack	create_empty_stack(int size)
{
	t_stack	stack;
	
	stack.arr = (int *)malloc(sizeof(int) * size);
	//Need to protect malloc
	//Need to set calloc instead of malloc! Or bzero
	stack.size = 0;
	return (stack);
}