/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:30:39 by angerard          #+#    #+#             */
/*   Updated: 2024/02/08 12:30:10 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_write(int n)
{
	int		first_dig;
	int		sec_dig;

	first_dig = (n / 10) + 48;
	sec_dig = (n % 10) + 48;
	write(1, &first_dig, 1);
	write(1, &sec_dig, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_write(i);
			write(1, " ", 1);
			ft_print_write(j);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return 0;
}
*/
