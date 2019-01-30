#include <stdio.h>
#include <stdlib.h>

void *memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	int i;

	i = n;
	str = (unsigned char *)s;
	while (*str && i > 0)
	{
		if (*str == c)
			return(str);
		str++;
		i--;
	}
	return(NULL);
}

int	main(int argc, char **argv)
{
	int n;
	int c;

	c = (int)argv[2][0];
	n = atoi(argv[3]);
	printf("%s", memchr(argv[1], c, n));
	return(0);
}
