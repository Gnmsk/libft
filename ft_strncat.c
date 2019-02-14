/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:09:53 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:10:07 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int i)
{
	while (*dest)
		dest++;
	if (*dest == '\0')
	{
		while (*src && i > 0)
		{
			*dest++ = *src++;
			i--;
		}
	}
	dest = '\0';
	return (dest);
}
