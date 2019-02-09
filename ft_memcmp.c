#include "libft.h"

int	ft_memcmp(const void *s1, const  void *s2, size_t n)
{
	const unsigned char *c1;
	const unsigned char *c2;
	size_t i;

	i = 0;
	c1 = s1;
	c2 = s2;
	if (n == 0)
		return (0);
	while (*c1 == *c2 && i < n)
	{
		if (*c1 != *c2)
			return(c1 - c2);
		c1++;
		c2++;
		i++;
	}
	return(c1 - c2);
}
