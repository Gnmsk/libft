#include <stdio.h>

char	*ft_strchr(char *src, char a)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
		if (src[i] == a)
			return(&src[i]);
	}
	return(0);
}

int	main(void)
{
	char s1[15] = "Bladerunner";
	char a;
	a = 'f';
	printf("%s", s1);
	printf("%s", ft_strchr(s1, a));
//	printf("%s", s1);
	return(0);
}
