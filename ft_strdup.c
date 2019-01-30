#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = ft_strlen(src);
	dest = ((char *)malloc(sizeof(char) * (len - 1)));
	if (dest == NULL)
		return (0);
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *str;

	str = "Moscow";
	printf("%s", ft_strdup(str));
	return (0);
}
