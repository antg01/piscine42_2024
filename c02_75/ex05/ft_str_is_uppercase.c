/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:12:24 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 09:24:52 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
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
	ft_str_is_uppercase(str);
	return 0;
}
*/
