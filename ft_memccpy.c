#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
		{
			*d = *s;
			d++;
			return(d);
		}
		d++;
		s++;
		i++;
	}
	return(NULL);
}

int	main(int argc, char **argv)
{
	int c;
	int n;
	char *s;

	if (argc < 3)
		return (0);
	s = argv[1];
	c = argv[3][0];
	n = atoi(argv[4]);
//	memccpy(s, argv[2], c, n);
	ft_memccpy(s, argv[2], c, n);
	printf("%p", ft_memccpy(s, argv[2], c, n));
	printf("%s", s);
	return(0);
}
