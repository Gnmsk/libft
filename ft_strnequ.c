#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 1;
	while (*s1 == *s2)
	{
		if ((*s1 == '\0' && *s2 == '\0') || (i == n))
			return(1);
		s1++;
		s2++;
		i++;
	}
	return(0);
}
