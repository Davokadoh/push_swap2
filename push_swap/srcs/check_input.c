#include "push_swap.h"

int	check_input(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		if (!is_int(strs[i]))
			return (0);
		i++;
	}
	return (1);
}