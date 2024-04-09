void ft_rev_int_tab(int *tab, int size )
{
	int i = 0;
	int j;
	int temp;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, n);
	for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
	}
	return 0;
}
