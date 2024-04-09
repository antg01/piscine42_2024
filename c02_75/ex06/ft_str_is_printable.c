/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:17:51 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 09:16:04 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	ft_str_is_printable(str);
	return 0;
}
*/
