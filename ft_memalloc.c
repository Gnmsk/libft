/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:49:46 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 19:16:25 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*newstr;
	int		i;

	i = 0;
	if (!(newstr = (char *)malloc(size)))
		return (NULL);
	ft_bzero(newstr, size);
	return (newstr);
}
