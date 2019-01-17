#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(char *stack, char *niddle, int len)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (stack[i] != '\0' && i <= len)
	{
		k = i;
		while (stack[k] == niddle[j] && k <= len)
		{
			k++;
			j++;
			if (niddle[j] == '\0')
				return (&stack[i]);
		}
		i++;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	int len;

	len = atoi(argv[3]);
	printf("%s", ft_strnstr(argv[1], argv[2], len));
	return(0);
}
