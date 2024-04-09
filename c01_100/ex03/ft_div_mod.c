/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:51:56 by angerard          #+#    #+#             */
/*   Updated: 2024/02/08 13:05:41 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int  main()
{
    int a = 10;
    int b = 2;
    int* pa = &a;
    int* pb = &b;

    ft_div_mod(a, b, pa, pb);
    return 0;
}
*/
