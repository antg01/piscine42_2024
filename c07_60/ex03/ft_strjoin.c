/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:06:30 by angerard          #+#    #+#             */
/*   Updated: 2024/02/27 09:10:25 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_lenght_sum(char **strs, char *sep, int size)
{
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*handle_empty_size(void)
{
	char	*result;

	result = malloc(sizeof(char));
	if (result) 
		*result = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			index;
	char		*result;
	const int	sum_total = ft_lenght_sum(strs, sep, size);

	i = -1;
	index = 0;
	if (size == 0) 
		return (handle_empty_size());
	result = malloc(sizeof(char) * sum_total + 1);
	if (!result) 
		return (NULL);
	while (++i < size)
	{
		ft_strcpy(result + index, strs[i]);
		index += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result + index, sep);
			index += ft_strlen(sep);
		}
	}
	result[sum_total] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main (void)
{
    char *strs[] = {"test1", "test2", "test3"};
    char *sep = "XXX";
    char *joined = ft_strjoin(3, strs, sep);
    free(joined);
    printf ("%s\n", joined);
	return 0;
}
*/
