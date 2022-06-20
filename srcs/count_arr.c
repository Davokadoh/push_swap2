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