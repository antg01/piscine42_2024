/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:50:45 by angerard          #+#    #+#             */
/*   Updated: 2024/02/21 11:53:24 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	int		sqrt;

	i = 1;
	sqrt = 46341;
	if (nb == 0 || nb == 1)
		return (nb);
	while (i <= sqrt)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
    int x = 16;
    printf("%d\n", ft_sqrt(x));
    return 0;
}
*/
