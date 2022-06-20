#include "push_swap.h"

//Free every string in the array of strings.
void free_strs(char **strs)
{
	int		i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}
