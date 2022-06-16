#include "push_swap.h"

//If string is either a positive or a negative integer, return true.
bool    is_int(char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == 0)
		return (false);
	if (str[i] != '\0')
		return (false);
	return (true);
}