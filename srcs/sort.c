#include "push_swap.h"

//Sorts using swap, rotate and reverse rotate.
//Stack a starts with 3 elements.
void sort3(t_stack *a)
{
    while (is_sorted(a->arr) == 0)
        if (a->arr[0] > a->arr[1] && a->arr[0] > a->arr[2])
            rotate(a);
        else if (a->arr[0] < a->arr[1] && a->arr[0] > a->arr[2])
            reverse_rotate(a);
        else
            swap(a);
    return ;
}

//Sorts using push, swap, rotate and reverse rotate.
//Stack a starts with 3 elements, stack b start with 0 elements.
void    sort5(t_stack *a, t_stack *b)
{
    while (is_sorted(a->arr) == 0)
    {

    }
}

//Call sort3, sort5 or sort_max depending on the size of the first stack.
void    sort(t_stack *a, t_stack *b)
{
    if (a->size == 3)
        return (sort3(a));
    else if (a->size == 5)
        return (sort5(a, b));
    else
        return (sort_max(a, b));
}
