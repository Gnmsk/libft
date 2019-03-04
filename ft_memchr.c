/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:50:24 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/04 17:42:31 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	int				i;

	i = n;
	str = (char *)s;
	while (*str && i > 0)
	{
		if ((unsigned char)str == (unsigned char)c)
			return (str);
		str++;
		i--;
	}
	return (NULL);
}
