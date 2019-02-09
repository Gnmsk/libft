#include "libft.h"

char *ft_strncpy(char *dest, char *src, int i)
{
	while (i > 0 && src)
	{
		*dest++ = *src++;
		i--;
	}
	*dest = '\0';
	return (dest);
}
