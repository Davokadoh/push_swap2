#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

void    free_strs(char **strs);
char    **copy_strs(char **strs, int size);
bool    is_int(char *str);
int     *strs_to_ints(char **strs);
void    print_ints(int *ints, int size);
void    sort_ints(int *ints, int size);
int     count_arr(char **arr);

#endif