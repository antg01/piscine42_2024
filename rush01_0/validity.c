/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:18:24 by angerard          #+#    #+#             */
/*   Updated: 2024/02/18 12:44:10 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input(char *input)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (input[i])
	{
		if ((input[i] < '1' || input[i] > '4') && input[i] != ' ')
			return (0);
		if (input[i] >= '1' && input[i] <= '4')
		{
			count++;
		}
		i++;
	}
	return (count == 16);
}
