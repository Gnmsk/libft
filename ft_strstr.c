/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:16:30 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:17:16 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *stack, char *needle)
{
	int i;
	int j;
	int r;

	i = 0;
	j = 0;
	while (stack[i] != '\0')
	{
		r = i;
		while (stack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&stack[r]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
