/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:19:27 by angerard          #+#    #+#             */
/*   Updated: 2024/02/27 08:33:48 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*ptemp;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptemp = malloc(sizeof(int) * (max - min));
	if (ptemp == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		ptemp[i] = min;
		min++;
		i++;
	}
	*range = ptemp;
	return (i);
}
/*
#include <stdio.h>
int main()
{
    int *range = NULL;
    int res = ft_ultimate_range(&range, 20, 30);
    if (res > 0)
    {
        for (int i = 0; i < res; i++)
        {
            printf("%d ", range[i]);
        }
        free(range);
    }
    printf("\nTotal: %d\n", res);
    return 0;
}
*/
