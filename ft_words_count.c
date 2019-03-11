/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 18:41:18 by dbruen            #+#    #+#             */
/*   Updated: 2019/03/11 18:49:36 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_count(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
				i++;
			if (s[i] == '\0')
				return (w);
		}
		i++;
	}
	return (w);
}