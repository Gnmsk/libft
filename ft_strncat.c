#include <stdio.h>

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

int	main(void)
{
	int n;

	n = 3;
	char s1[10] = "Moscow";
	char s2[10] = "London";
	printf("%s", s1);
	ft_strncat(s1, s2, n);
	printf("%s", s1);
	return(0);
}
