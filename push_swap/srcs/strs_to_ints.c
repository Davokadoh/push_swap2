#include "push_swap.h"

//Converts an array of strings to an array of integers.
int	*strs_to_ints(char **strs)
{
	int	i;
	int	*ints;

	i = 0;
	ints = (int *)malloc(sizeof(int) * count_arr(strs));
	while (strs[i] != NULL)
	{
		if (is_int(strs[i]))
			ints[i] = atoi(strs[i]);
		else
			ints[i] = 0;
		i++;
	}
	return (ints);
}