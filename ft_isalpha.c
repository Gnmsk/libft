#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return(c);
	return(0);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_isalpha(argv[1][0]));
	return(0);
}
