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
	long long	sign;
	long long	num;

	num = 0;
	sign = 1;
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
	}
	if (*str < '0' || *str > '9')
		return (num * sign);
	return (0);
}
