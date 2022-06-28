#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

typedef struct	s_stack
{
	int		*arr;
	int		size;
}				t_stack;

void	free_strs(char **strs);
char	**copy_strs(char **strs, int size);
int		is_int(char *str);
int		check_input(char **strs);
int		is_sorted(t_stack *stack);
int		get_smallest(t_stack *stack);
int		get_biggest(t_stack *stack);
int		*strs_to_ints(char **strs);
int		count_arr(char **arr);
void	bubble_sort(t_stack *stack);
void	smart_rotate(char ch, t_stack *stack, int target);
void	sort(t_stack *a, t_stack *b);
void	shift_left(int *arr, int size);
void	shift_right(int *arr, int size);
void	rotate(char ch, t_stack *stack);
void	push(char ch, t_stack *src, t_stack *dst);
void	swap(char ch, t_stack *stack);
void	rev_rotate(char ch, t_stack *stack);
void	free_stack(t_stack *stack);
t_stack	create_empty_stack(int size);
t_stack	copy_stack(t_stack *src);

#endif