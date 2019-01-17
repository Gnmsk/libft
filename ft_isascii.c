#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c<= 127)
		return(c);
	return(0);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_isascii(argv[1][0]));
	return(0);
}
