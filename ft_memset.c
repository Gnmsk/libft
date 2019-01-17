#include <stdio.h>
#include <string.h>

char	*ft_memset(char *s1, int c, int size)
{
	int i;

	i = 0;
	while (size > 0)
	{
		s1[i] = c;
		i++;
		size--;
	}
	return(s1);
}

int	main(void)
{
	int size;
	int c;

	char s1[10] = "London";
	c = 97;
	size = 12;
	printf("%s",ft_memset(s1, c, size));
}
