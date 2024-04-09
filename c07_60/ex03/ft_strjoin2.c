#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strcopy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int len_tot(int size, char **str, char *sep)
{
	int i = 0;
       	int tot = 0;
	while (i < size)
	{
		tot += ft_strlen(str[i]);
		if (i < size - 1)
			tot += ft_strlen(sep);
		i++;	
	}
	return tot;
}

char *ft_strjoint(int size, char **strs, char *sep)
{
	int i = 0;
	int index = 0;
	int len = 0;
	char *words;

	len = len_tot(size, strs, sep);
	if (size == 0)
	{
		words = malloc(sizeof(char *) * (len + 1));
		*words = '\0';
		return words;
	}
	words = malloc(sizeof(char *) * (len + 1));
	if (!words)
		return NULL;
	while (i < size)
	{
		ft_strcopy(words + index, strs[i]);
		index += ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcopy(words + index, sep);
		index += ft_strlen(sep);
		i++;
	}
	words[len] = 0;
	return words;
}

int main()
{
	char *strs[] = {"this", "is", "a", "test"};
	char sep[] = "-";
	char *joined = ft_strjoint(4, strs, sep);
	printf("%s \n", joined);
	return 0;
}
