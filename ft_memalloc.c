#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char *newstr;

	if(!(newstr = (char *)malloc(size_t + 1)))
		return(NULL);
	return(newstr);
}
