/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:01:48 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:01:50 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *src, char a)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
		if (src[i] == a)
			return (&src[i]);
	}
	return (0);
}
