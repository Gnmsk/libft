#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, int size)
{
	int i;
	char *s1;

	s1 = s;
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

	char s[10] = "London";
	c = 97;
	size = 6;
	printf("%s",ft_memset(s, c, size));
}
