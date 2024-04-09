/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:18:18 by angerard          #+#    #+#             */
/*   Updated: 2024/02/17 14:20:08 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input(char *input)
{
	int	count;
	int	i;

	while(input[i])
	{
		if(input[i] < '1' || input[i] > '4')
			return(0);
		while(input[i] == ' ')
		{
			i++;
			if(input[i] >= '1' && input[i] <= '4')
			{
				count++;
			}
		}
		i++;
	}
	count++;

	return count == 16;
}
