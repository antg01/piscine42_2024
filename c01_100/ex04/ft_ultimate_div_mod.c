/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:10:01 by angerard          #+#    #+#             */
/*   Updated: 2024/02/08 14:32:23 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		res_a;
	int		res_b;

	res_a = *a / *b;
	res_b = *a % *b;
	*a = res_a;
	*b = res_b;
}
/*
int  main()
{
    int a = 10;
    int b = 2;
    int* pa = &a;
    int* pb = &b;

    ft_ultimate_div_mod(pa, pb);
    return 0;
}
*/
