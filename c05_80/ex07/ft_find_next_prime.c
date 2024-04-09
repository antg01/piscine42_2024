/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:53:03 by angerard          #+#    #+#             */
/*   Updated: 2024/02/21 12:07:21 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		i;

	i = 0;
	if (nb < 0)
		return (2);
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
/*
#include <stdio.h>
int main()
{
    int n = 8;
    int res = ft_find_next_prime(n);
	printf("%d \n", res);
	
    return 0;
}
*/
