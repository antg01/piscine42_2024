/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:49:17 by angerard          #+#    #+#             */
/*   Updated: 2024/02/21 12:09:28 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res *= i;
		nb--;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	int res = ft_iterative_factorial(5);
	printf("%d \n", res);
}
*/
