#include "libft.h"

void	*ft_memset(void *s, int c, int size)
{
	int i;
	char *s1;

	s1 = s;
	i = 0;
	while (size > 0)
	{
		s1[i] = c;
		i++;
		size--;
	}
	return(s1);
}
