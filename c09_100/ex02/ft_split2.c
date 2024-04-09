#include <stdlib.h>
#include <stdio.h>

int 	is_sep(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int 	ft_strlen_sep(char *str)
{
	int	i = 0;
	while (str[i] && !is_sep(str[i]))
		i++;
	return i;
}

int 	words_count(char *str)
{
	int	i = 0;
	int	tot_sum = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
			tot_sum++;
			while (str[i] && !is_sep(str[i]))
				i++;
	}
	return tot_sum;
}

char	*ft_strdup_word(char *str)
{
	int	i = 0;
	int	len = 0;
	char	*word;

	len = ft_strlen_sep(str);
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char	**ft_split(char *str)
{
	int	i = 0;
	int 	index =0;
	int 	tot_len = 0;
	char	**strings;

	tot_len = words_count(str);
	strings = (char **)malloc(sizeof(char *) * (tot_len + 1));

	if (!strings)
		return NULL;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
			strings[index] = ft_strdup_word(str + i);
			while (str[i] && !is_sep(str[i]))
				i++;
			index++;
	}
	strings[index] = 0;
	return strings;
}

int main()
{
	char	*str = "this is a test";
	char 	**splitted = ft_split(str);
	for (int i = 0; splitted[i] != NULL; i++)
		printf("[%d]: %s \n",i,  splitted[i]);
	free(splitted);
}
