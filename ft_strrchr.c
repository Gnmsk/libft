/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:11:11 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 17:32:26 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *src, char a)
{
	size_t i;

	i = ft_strlen(src);
	while (i != 0)
	{
		if (src[i] == a)
			return ((char *)src + i);
		i--;
	}
	if (!a && src[i] == '\0')
		return ((char *)src + i);
	return (0);
}
