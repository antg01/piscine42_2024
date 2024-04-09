void	ft_sort_int_tab(int *tab, int size)
{
	int 	i;
	int	j;
	int 	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
#include <stdio.h>
int main()
{
	int arr[] = {1, 3, 2, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	ft_sort_int_tab(arr, n);
	for(int i = 0; i < n; i++)
		printf("%d, ", arr[i]);
}

