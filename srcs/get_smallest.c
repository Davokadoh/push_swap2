int	get_smallest(int *arr)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = arr[0];
	while (arr[i])
	{
		if (arr[i] < smallest)
			smallest = arr[i];
		i++;
	}
	return (smallest);
}