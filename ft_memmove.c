#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, site_t n)
{
	unsigned char *d;
	const unsigned char *s;
	unsigned char *tmp;
	int i;

	i = 0;
	d = dest;
	s = src;
	return(dest);
}

int	main(int argc, char **argv)
{
	int n;
	char *str;

	n = atoi(argv[3]);
	str = argv[1];
	ft_memmove(str, argv[2], n);
	printf("%s", str);
	return(0);
}
