//sort an array of integers
void	sort_ints(int *ints, int size)
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