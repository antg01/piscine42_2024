/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:48:49 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 09:26:48 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
	ft_str_is_alpha(str);
	return 0;
}
*/
