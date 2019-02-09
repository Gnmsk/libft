#include "libft.h"

char	*ft_strncat(char *dest, char *src, int i)
{
	while (*dest)
		dest++;
	if (*dest == '\0')
	{
		while (*src && i > 0)
		{
			*dest++ = *src++;
			i--;
		}
	}
	dest = '\0';
	return(dest);
}
