#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *newstr;
	int i;

	i = 0;
	if(!(newstr = (char *)malloc(size)))
		return(NULL);
	while (newstr[i++])
		newstr[i] = 0;
	return(newstr);
}
