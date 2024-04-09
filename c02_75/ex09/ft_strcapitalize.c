/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <ant.g@hotmail.be>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:41:23 by angerard          #+#    #+#             */
/*   Updated: 2024/02/11 08:44:47 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; 
		else if (flag == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
/*
int main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *res = ft_strcapitalize(str);
	printf("%s \n", res);
	return 0;
}
*/
