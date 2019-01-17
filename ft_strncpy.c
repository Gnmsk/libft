#include <stdio.h>

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

int	main(void)
{
	int i;

	i = 3;
	char s1[10] = "Moscow";
	char s2[10] = "";

	printf("%s", s1);
	ft_strncpy(s2, s1, i);
	printf("%s", s2);
	return (0);
}
