/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:35:43 by angerard          #+#    #+#             */
/*   Updated: 2024/02/10 13:22:18 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	/*1st line*/

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

	/* middle line */

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
		if(x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		i++;
	}

	/* last linr */

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

int main()
{
	rush(1, 1);
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');

	rush(5, 1);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	return 0;
}
