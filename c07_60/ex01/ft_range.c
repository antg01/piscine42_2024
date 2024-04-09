/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:39:34 by angerard          #+#    #+#             */
/*   Updated: 2024/02/27 08:32:44 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (max <= min)
		return (0);
	tab = malloc(sizeof(int) *(max - min));
	if (!tab)
		return (0);
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
    int min = 20;
    int max = 100;
    int *res = ft_range(min, max);
    int size = max - min;

    if (res != NULL)
    {
        for (int i = 0; i < size; i++)
            printf("%d ", res[i]);
        free(res);
    }
    return 0;
}
*/
