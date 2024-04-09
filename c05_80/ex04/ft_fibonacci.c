/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:30:12 by angerard          #+#    #+#             */
/*   Updated: 2024/02/21 12:10:26 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
}
/*
#include <stdio.h>
int main() {
   int n = 6;
   int i;
	int res = ft_fibonacci(n); 
	printf("%d \n", res);
   for(i = 0;i<n;i++) {
      printf("%d ", ft_fibonacci(i));
   }
}
*/
