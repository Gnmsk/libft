#include "libft.h"

char	*ft_strrchr(char *src, char a)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		i--;
		if (src[i] == a)
			return(&src[i]);
	}
	return(0);
}
