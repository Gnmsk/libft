#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

int	main()
{
	int n;
	char str[7] = "london";

	n = 3;
	ft_bzero(str, n);
	printf("%s", str);
	return(0);
}
