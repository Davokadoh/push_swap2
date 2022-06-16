#include "push_swap.h"
#include "libft.h"

//Counts the number of elements in the array.
int		count_arr(char **arr)
{
    int		i;

    if (!arr)
        return (0);
    i = 0;
    while (arr[i])
        i++;
    return (i);
}

//Converts an array of strings to an array of integers.
int *convert(char **strs)
{
    int		i;
    int		*ints;

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

//Prints every int of an array of integers.
void print_ints(int *ints, int size)
{
    int		i;

    i = 0;
    while (i < size)
    {
        printf("%d\n", ints[i]);
        i++;
    }
}

//sort an array of integers
void sort_ints(int *ints, int size)
{
    int		i;
    int		j;
    int		tmp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (ints[i] > ints[j])
            {
                tmp = ints[i];
                ints[i] = ints[j];
                ints[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

//Main function, parses the arguments and calls the other functions.
//If only two args, split the string into an array of strings.
int		main(int argc, char **argv)
{
    int		*ints, size;
    char	**strs;

    if (argc < 2)
    {
        write(2, "Usage: ./split [string]\n", 24);
        return (1);
    }
    else if (argc == 2)
        strs = ft_split(argv[1], ' ');
    else
        strs = copy_strs(argv, argc);
    size = count_arr(strs);
    ints = convert(strs);
    sort_ints(ints, size);
    print_ints(ints, size);
    free(ints);
    free_strs(strs);
}