#include "push_swap.h"

// Sorts using swap, rotate and reverse rotate.
// Stack a starts with 3 elements.
void	sort3(t_stack *a)
{
	while (is_sorted(a->arr) == 0)
	{
		if (a->arr[0] > a->arr[1] && a->arr[0] > a->arr[2])
			rotate(a);
		else if (a->arr[0] < a->arr[1] && a->arr[0] > a->arr[2])
			reverse_rotate(a);
		else
			swap(a);
	}
}

// Sorts using push, swap, rotate and reverse rotate.
// Stack a starts with 3 elements, stack b start with 0 elements.
// Push twice the first element to b.
// Call sort3 to sort a.
// Smart_rotate to push back to a.
void	sort5(t_stack *a, t_stack *b)
{
	if (is_sorted(a->arr) == 1)
		return;
	smart_rotate(a, get_smallest(a->arr));
	push(a, b);
	smart_rotate(a, get_smallest(a->arr));
	push(a, b);
	sort3(a);
	push(b, a);
	push(b, a);
}

// Call sort3, sort5 or sort_max depending on the size of the first stack.
void	sort(t_stack *a, t_stack *b)
{
	if (a->size == 3)
		sort3(a);
	else if (a->size == 5)
		sort5(a, b);
	else
		sort_max(a, b);
}

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

int bottom(t_stack *stack, int pivot)
{
	int i;

	i = stack->size - 1;
	while (i >= 0)
	{
		if (stack->arr[i] > pivot)
			return (i);
		i--;
	}
	return (i);
}

void sort_max(t_stack *a, t_stack *b)
{
	int pivot;
	int target1;
	int target2;
	int *sorted;

	sorted = dup(a->arr);
	sort_ints(sorted, a->size);
	pivot = sorted[0];
	while (a->size > 3)
	{
		target1 = top(a, pivot);
		target2 = bot(a, pivot);
		if (target1 < target2)
			smart_rotate(a, target1);
		else
			smart_rotate(a, target2);
		push(a, b);
		if (b->arr[0] < b->arr[1])
			swap(b);
	}
	sort3(a);
	while (b->size > 0)
		push(b, a);
	free(sorted);
}