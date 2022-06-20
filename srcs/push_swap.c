#include "push_swap.h"
#include "libft.h"

//Main function, parses the arguments and calls the other functions.
//If only two args, split the string into an array of strings.
int	main(int argc, char **argv)
{
	t_stack	*a, *b;
	char	**strs;

	if (argc < 2)
	{
		write(2, "Error\n", 24);
		return (1);
}
	else if (argc == 2)
		strs = ft_split(argv[1], ' ');
	else
		strs = copy_strs(argv, argc);
	a->size = count_arr(strs);
	a->arr = strs_to_ints(strs);
	b->size = a->size;
	b = create_empty_stack(b->size);
	sort(a, b);
	free_stack(a);
	free_stack(b);
	free_strs(strs);
	return (0);
}
