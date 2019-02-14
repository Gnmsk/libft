/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:50:24 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 15:55:39 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = n;
	str = (unsigned char *)s;
	while (*str && i > 0)
	{
		if (*str == c)
			return (str);
		str++;
		i--;
	}
	return (NULL);
}
