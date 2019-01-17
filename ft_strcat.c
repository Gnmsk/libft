#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	while (*dest = '\0')
		dest++;
	if (*dest == '\0')
	{
		while(*src)
			*dest++ = *src++;
	}
	*dest = '\0';
	return(dest);
}

int	main(void)
{
	char s1[20] = "Moscow";
	char s2[10] = "City";
	printf("%s", s1);
	ft_strcat(s1, s2);
	printf("%s", s1);
	return(0);
}
