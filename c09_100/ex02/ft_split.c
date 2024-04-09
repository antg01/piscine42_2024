/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:31:08 by angerard          #+#    #+#             */
/*   Updated: 2024/02/27 16:10:57 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	words_count(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

int	strlen_sep(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_strdup_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		index;
	int		len_strings;
	char	**strings;

	i = 0;
	index = 0;
	len_strings = words_count(str, charset);
	strings = (char **)malloc(sizeof(char *) * (len_strings + 1));
	if (!strings)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			strings[index] = ft_strdup_word(str + i, charset);
			while (str[i] && !is_sep(str[i], charset))
				i++;
			index++;
		}
	}
	strings[index] = NULL;
	return (strings);
}
/*
#include <stdio.h>
int main()
{
    char *str = "this is a split test";
    char *charset = " ";
    char **splitted = ft_split(str, charset);
    int i = 0;

    while (splitted[i] != NULL)
    {
        printf("[%d]: '%s'\n", i, splitted[i]);
        free(splitted[i]);
        i++;
    }
    free(splitted);

    return (0);
}
*/
