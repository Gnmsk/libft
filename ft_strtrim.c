#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlenn(char const *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return(i);
}

char	*ft_strtrim(char const *s)
{
	char *ns;
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlenn(s);
	if(!(ns = (char *)malloc(len + 1)))
		return(NULL);
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\t' || s[j] == '\n')
		j++;
	while (s[len] == ' ' || s[len] == ',' || s[len] == '\t' || s[len] == '\n')
		len--;
	while (j <= len)
	{
		ns[i] = s[j];
		j++;
		i++;
	}
	ns[i] = '\0';
	return(ns);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_strtrim(argv[1]));
	return(0);
}
