#include <stdio.h>

char	*ft_strrchr(char *src, char a)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		i--;
		if (src[i] == a)
			return(&src[i]);
	}
	return(0);
}

int	main(int argc, char **argv)
{
	char a;

	a = argv[2][0];
	printf("%s", ft_strrchr(argv[1], a));
	return(0);
}
