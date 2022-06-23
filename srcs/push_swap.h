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
int		*strs_to_ints(char **strs);
void	sort_ints(int *ints, int size);
int		count_arr(char **arr);
void	free_stack(t_stack stack);
t_stack	create_empty_stack(int size);
void	smart_rotate(t_stack *stack, int target);
void	sort(t_stack a, t_stack b);
void	shift_left(int *arr, int size);
void	shift_right(int *arr, int size);
void	rotate(t_stack *stack);
void	rev_rotate(t_stack *stack);

#endif