#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *substr;

	i = 0;
	if(!(substr = (char *)malloc(len + 1)))
		return(NULL);
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[len] = '\0';
	return(substr);
}
