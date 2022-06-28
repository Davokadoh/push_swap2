#include "push_swap.h"

//Copy every element of an array of strings into a new array of string except the first element.
//Returns the new array
char **copy_strs(char **strs, int size)
{
	char	**new_strs;
	int		i;

	new_strs = (char **)malloc(sizeof(char *) * (size));
	i = 1;
	while (i < size)
	{
		new_strs[i - 1] = strdup(strs[i]);
		i++;
	}
	new_strs[i - 1] = NULL;
	return (new_strs);
}