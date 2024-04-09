/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:08:55 by angerard          #+#    #+#             */
/*   Updated: 2024/02/13 17:17:34 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		base;
	int		sign;

	i = 0;
	base = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n'
		|| str[i] == '\v'
		|| str[i] == '\f'
		|| str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "  ---+--+1234ab567";
    int val = ft_atoi(str);
    printf("%d ", val);
    return 0;
}
*/
