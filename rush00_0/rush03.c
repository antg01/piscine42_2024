/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:35:43 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 16:47:45 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_fst_line(int x)
{
	int		i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_mddl_line(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('B');
		j = 0;
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_lst_line(int x, int y)
{
	int		i;

	if (y > 1)
	{
		ft_putchar('A');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (!(x <= 0 || y <= 0))
	{
		ft_fst_line(x);
		ft_mddl_line(x, y);
		ft_lst_line(x, y);
	}
	else
	{
		write(1, "Please enter correct values\n", 28);
	}
}
