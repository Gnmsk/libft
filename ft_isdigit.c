#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return(0);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_isdigit(argv[1][0]));
	return(0);
}
