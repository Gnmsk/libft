/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:16:30 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/05 18:54:06 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *stack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (stack);
	while (stack[i] != '\0')
	{
		while (stack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (stack + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
