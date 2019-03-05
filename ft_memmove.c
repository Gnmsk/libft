/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:56:24 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 20:12:51 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = 0;
	if (src < dest)
		while (n-- > 0)
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	else
		ft_memcpy(dest, src, n);
	return ((unsigned char*)dest);
}
