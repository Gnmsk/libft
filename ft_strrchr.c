/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:11:11 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:11:26 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *src, char a)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		i--;
		if (src[i] == a)
			return (&src[i]);
	}
	return (0);
}
