/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:04:28 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:05:56 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	k = i;
	while (src[j] && k < size)
	{
		dest[i + j] = src[j];
		j++;
		k++;
	}
	dest[k] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
