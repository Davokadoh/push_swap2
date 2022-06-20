//Move every element of the array one position to the left.
void	shift_left(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
}

//Move every element of the array one position to the right.
void	shift_right(int *arr, int size)
{
	int i;

	i = size - 1;
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
}