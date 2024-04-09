/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:43:36 by angerard          #+#    #+#             */
/*   Updated: 2024/02/08 17:18:22 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_table(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

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
/*
int main()
{
	int str[] = {2, 4, 1, 3};
	int *ps = str;
	ft_sort_int_table(ps, 4);
	return 0;
}
*/
