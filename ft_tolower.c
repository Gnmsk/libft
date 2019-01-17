#include <stdio.h>
#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

void	pstr(char *str)
{
	while(*str)
	{
		pchar(*str);
		str++;
	}
}

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return(c + 32);
	return(c);
}

int	main(int argc, char **argv)
{
	char *s1;

	s1 = argv[1];
	while (*argv[1])
	{
		pchar(ft_tolower(*argv[1]));
		argv[1]++;
	}
	printf("%s", s1);
	return(0);
}
