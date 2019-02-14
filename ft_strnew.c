/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:46 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:14:41 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (size + 1 < size)
		return (NULL);
	if (!(newstr = (char *)malloc(size + 1)))
		return (NULL);
	while (newstr[i])
	{
		newstr[i] = 0;
		i++;
	}
	return (newstr);
}
