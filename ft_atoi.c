#include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int num;

	num = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\f' || *str == '\r' || *str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		return(0);
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (*str < '0' || *str > '9')
		return (num * sign);
	return(0);
}
