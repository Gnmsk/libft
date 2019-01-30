#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	int i;

	d = dest;
	s = src;

	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			*(d + i) = *(s + i);
			i--;
		}
		return (d);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(d);
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
