#include "push_swap.h"

int top(t_stack *stack, int pivot)
{
	int i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->arr[i] < pivot)
			return (i);
		i++;
	}
	return (i);
}

int bot(t_stack *stack, int pivot)
{
	int i;

	i = stack->size - 1;
	while (i >= stack->size)
	{
		if (stack->arr[i] < pivot)
			return (i);
		i--;
	}
	return (i);
}

void	sort3(t_stack *a)
{
	while (is_sorted(a) == 0)
	{
		if (a->arr[0] > a->arr[1] && a->arr[0] > a->arr[2])
			rotate('a', a);
		else if (a->arr[0] < a->arr[1] && a->arr[0] > a->arr[2])
			rev_rotate('a', a);
		else
			swap('a', a);
	}
}

void	sort5(t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 1)
		return;
	smart_rotate('a', a, get_smallest(a));
	push('b', a, b);
	smart_rotate('a', a, get_smallest(a));
	push('b', a, b);
	sort3(a);
	push('a', b, a);
	push('a', b, a);
}

void sort_max(t_stack *a, t_stack *b)
{
	t_stack	sorted;
	int		pivot;
	int		target1;
	int		target2;
	int		i;

	sorted = copy_stack(a);
	bubble_sort(&sorted);
	i = 25;
	while (a->size > 0)
	{
		if (i % 25 == 0)
		{
			if (i > a->size)
				i = a->size;
			pivot = sorted.arr[i];
		}
		target1 = top(a, pivot);
		target2 = bot(a, pivot);
		if (target1 < target2 )
			smart_rotate('a', a, target1);
		else
			smart_rotate('a', a, target2);
		push('b', a, b);
		i++;
	}
	free(sorted.arr);
	while (b->size > 0)
	{
		smart_rotate('b', b, get_biggest(b));
		push('a', b, a);
	}
	while (is_sorted(a) == 0)
		smart_rotate('a', a, get_smallest(a));
}

void	sort(t_stack *a, t_stack *b)
{
	if (a->size == 3)
		sort3(a);
	else if (a->size == 5)
		sort5(a, b);
	else
		sort_max(a, b);
}
