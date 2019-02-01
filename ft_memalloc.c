#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char *newstr;
	int i;

	i = 0;
	if(!(newstr = (char *)malloc(sizeof(char) *(size + 1))))
		return(NULL);
	while (newstr[i++])
		newstr[i] = 0;
	return(newstr[0]);
}
