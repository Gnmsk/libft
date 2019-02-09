#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	if (*dest == '\0')
	{
		while(*src)
			*dest++ = *src++;
	}
	*dest = '\0';
	return(dest);
}
