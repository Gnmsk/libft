#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
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
