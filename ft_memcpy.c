#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	while (i < n && ((char *)dest)[i] != '\0')
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return(dest);
}

int	main(int argc, char **argv)
{
	int n;

	n = atoi(argv[3]);
	printf("%s",ft_memcpy(argv[1], argv[2], n));
	return(0);
}
