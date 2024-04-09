char	*ft_strncopy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

#include <stdio.h>
int main()
{
	char s1[] = "azerty";
	int n = sizeof(s1) / sizeof(s1[0]);
	char s2[n];
	char *res = ft_strncopy(s2, s1, n);
	printf("%s", res);
}
