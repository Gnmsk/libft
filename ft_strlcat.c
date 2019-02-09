#include "libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	while (dest[i] != '\0')              // till dest exist
		i++;                 // counting dest
	k = i;                // rest free size 
	while (src[j] && k < size)   // till src exist and enought place
	{
		dest[i + j] = src[j];// concatination
		j++;                 // counting src
		k++;                 // size reducing
	}
	dest[k] = '\0';          // end
	while (src[j])
		j++;
	return(i + j);
}
