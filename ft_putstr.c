#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}