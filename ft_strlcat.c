#include <stdio.h>
#include <stdlib.h>

int	strlcat(char *dest, char *src, int size)
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

int	main(int argc, char **argv)
{
	int n;

	n = 10;
	char *dest;
	dest = argv[1];
	char *src;
	src = argv[2];

//	printf("%d", slen(dest));
//	printf("%ld", sizeof(dest));
	printf("%d",strlcat(dest, src, n));
	printf("%s", dest);
	return(0);
}
