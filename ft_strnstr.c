/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:12:07 by dbruen            #+#    #+#             */
/*   Updated: 2019/02/14 16:12:26 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *stack, char *niddle, int len)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (stack[i] != '\0' && i <= len)
	{
		k = i;
		while (stack[k] == niddle[j] && k <= len)
		{
			k++;
			j++;
			if (niddle[j] == '\0')
				return (&stack[i]);
		}
		i++;
	}
	return (0);
}
