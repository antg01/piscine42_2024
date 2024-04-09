/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:14:19 by angerard          #+#    #+#             */
/*   Updated: 2024/02/21 12:19:33 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	int res = ft_iterative_power(-5,5);
	printf("%d \n", res);
}
*/
