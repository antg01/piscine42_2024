/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:56:21 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 09:27:46 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			flag = 0;
		}
		i++;
	}
	if (str[0] == '\0')
		flag = 1;
	return (flag);
}
/*
int main()
{
	char	str[] = "hello";
	ft_str_is_numeric(str);
	return 0;
}
*/
