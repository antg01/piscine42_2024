/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:06:30 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 09:20:25 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
	ft_str_is_lowercase(str);
	return 0;
}
*/
