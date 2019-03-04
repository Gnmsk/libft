/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:36:46 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/26 19:29:15 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
<<<<<<< HEAD
	int 		sign;
	long long	num;
//	long long 	maxint;
//	long long	minint;
=======
	long long	sign;
	long long	num;
>>>>>>> a8205b922443d3fee5997aaa871ad4eeb75adcbb

	// 2147483648
	num = 0;
	sign = 1;
//	maxint = 2147483648;
//	minint = -2147483647;
	while ((*str == '\t' || *str == '\n' || *str == '\f') ||
			(*str == '\r' || *str == '\v' || *str == ' '))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	//	if ((num * sign) > maxint)
	//		return (-1);
	//	if ((num * sign) < minint)
	//		return (0);
	}
	if (*str < '0' || *str > '9')
		return ((int)num * sign);
	return (0);
}
