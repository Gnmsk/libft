#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}

int	main(void)
{
	char s1[] = "London";
	char s2[] = "Moscow";
	printf("%s", s1);
	ft_strcpy(s1, s2);
	printf("%s", s1);
	return (0);
}
