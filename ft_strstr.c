#include <stdio.h>

char	*ft_strstr(char *stack, char *needle)
{
	int i;
	int j;
	int r;

	i = 0;
	j = 0;
	while (stack[i] != '\0')
	{
		r = i;
		while (stack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return(&stack[r]);
		}
		j = 0;
		i++;;
	}
	return(NULL);
}

int	main(void)
{
	char s1[15] = "Bladerunner";
	char s2[5] = "run";
	printf("%s", ft_strstr(s1, s2));
	return(0);
}
