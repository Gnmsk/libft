/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:07 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 17:42:58 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *stack, char const *niddle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;
	
	i = 0;
	j = 0;
	while (stack[i] != '\0' && i <= len)
	{
		k = i;
		while (stack[k] == niddle[j] && k <= len)
		{
			if (niddle[j] == '\0')
				return ((char *)stack + i);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
