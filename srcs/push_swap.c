#include "push_swap.h"
#include "libft.h"

//Main function, parses the arguments and calls the other functions.
//If only two args, split the string into an array of strings.
int		main(int argc, char **argv)
{
    int		*ints, size;
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
    size = count_arr(strs);
    ints = strs_to_ints(strs);
    sort_ints(ints, size);
    free(ints);
    free_strs(strs);
    return (0);
}